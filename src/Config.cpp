#include <LoggerAPI.h>

nlohmann::json Plugin_Config = {};
extern bool ConsoleLog;
extern bool FileLog;
extern bool JLLog;
extern bool fixDragonBreath;

std::string defaultConfig = R"({
    //是否启用控制台死亡信息
    //由于从 BDS 1.20.0 开始，BDS的I18n只加载原版资源包，这会导致控制台部分死亡信息不能正常翻译
    //欲修复此问题，请安装 I18nFixer 插件
    "EnableConsoleLog": false,
    //是否将死亡日志写入文件保存
    //保存路径为 ./logs/DeathLog.log
    //如果未启用控制台死亡信息，此选项无效
    "EnableDeathLogFile": false,
    //是否启用玩家进退服信息
    "EnableJoin&LeftMessage": false
})";

void tryCreateConfigFile() {
    if(!std::filesystem::exists("./plugins/DeathMessages")){
        std::filesystem::create_directories("./plugins/DeathMessages");
    }
    if(!std::filesystem::exists("./plugins/DeathMessages/config.jsonc")){
        WriteAllFile("./plugins/DeathMessages/config.jsonc", defaultConfig);
    }
}

void initConfig() {
    std::ifstream jsonfile("./plugins/DeathMessages/config.jsonc");
	if (jsonfile) {
        std::stringstream buffer;
        buffer << jsonfile.rdbuf();
        std::string jsoncString = buffer.str();
        Plugin_Config = nlohmann::json::parse(jsoncString, nullptr, true, true);
        jsonfile.close();
	}
    if (Plugin_Config.contains("EnableConsoleLog") && Plugin_Config["EnableConsoleLog"].is_boolean()) {
        ConsoleLog = Plugin_Config["EnableConsoleLog"].get<bool>();
    }
    if (Plugin_Config.contains("EnableDeathLogFile") && Plugin_Config["EnableDeathLogFile"].is_boolean()) {
        FileLog = Plugin_Config["EnableDeathLogFile"].get<bool>();
    }
    if (Plugin_Config.contains("EnableJoin&LeftMessage") && Plugin_Config["EnableJoin&LeftMessage"].is_boolean()) {
        JLLog = Plugin_Config["EnableJoin&LeftMessage"].get<bool>();
    }
}

void loadConfig() {
    tryCreateConfigFile();
    initConfig();
}