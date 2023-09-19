#include <LoggerAPI.h>
#include "version.h"
#include <GMLib/GMLib_ModAPI.h>
#include <mc/ActorDamageSource.hpp>

extern Logger logger;
extern void LoadPlugin();

void PluginInit() {
    Logger(PLUGIN_NAME).info("当前版本 {}", PLUGIN_FILE_VERSION_STRING);
    Logger(PLUGIN_NAME).info("插件作者 Tsubasa6848");
}