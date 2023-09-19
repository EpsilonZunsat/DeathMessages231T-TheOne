#include <GMLib/GMLib_ModAPI.h>
#include <mc/ActorDamageSource.hpp>
#include <EventAPI.h>
#include <FMT/color.h>
#include <mc/Level.hpp>
#include <stdio.h>
#include <WinNls.h>
#include <mc/Player.hpp>

void regesterDamageCause() {
    GMLib_Mod::addDamageCause(ActorDamageCause::Anvil, "anvil", "null");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::BlockExplosion, "explosion", "death.attack.explosion", "crystal");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::BlockExplosion, "badRespawnPoint", "death.attack.badRespawnPoint.message", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::EntityAttack, "player", "minecraft:player");
    GMLib_Mod::addDamageCause(ActorDamageCause::EntityAttack, "sting", "minecraft:bee");
    GMLib_Mod::addDamageCause(ActorDamageCause::EntityAttack, "mob");
    //GMLib_Mod::addDamageCause(ActorDamageCause::EntityAttack, "generic", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::EntityExplosion, "witherSkull", "minecraft:wither_skull");
    GMLib_Mod::addDamageCause(ActorDamageCause::EntityExplosion, "witherSkull", "minecraft:wither_skull_dangerous");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::EntityExplosion, "explosion", "death.attack.explosion.player");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::EntityExplosion, "explosion", "death.attack.explosion", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Contact, "cactus", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Contact, "sweetBerry", "null");
    //GMLib_Mod::addDamageCause(ActorDamageCause::Contact, "generic");
    GMLib_Mod::addDamageCause(ActorDamageCause::Drowning, "drown", "null");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.fell.finish.item");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.attack.fall.item", "low");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.fell.assist.item", "escaping_high_weapon");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.fell.assist", "escaping_high");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.fell.killer", "high");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Fall, "fall", "death.fell.accident.generic", "mid");
    //GMLib_Mod::addDamageCause(ActorDamageCause::Fall, "generic", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::FallingBlock, "fallingBlock", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Fire, "inFire", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::FireTick, "onFire", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Fireworks, "fireworks", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::FlyIntoWall, "flyIntoWall", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Freezing, "freeze", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Lava, "lava", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Lightning, "lightningBolt", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Wither, "wither", "null");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Magic, "magic", "death.attack.magic", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Magic, "indirectMagic");
    GMLib_Mod::addDamageCause(ActorDamageCause::Magma, "magma", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Stalactite, "stalactite", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Stalagmite, "stalagmite", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Starve, "starve", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Suffocation, "inWall", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::SonicBoom, "sonicBoom", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::SonicBoom, "sonicBoom");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::SonicBoom, "sonicBoom", "death.attack.sonicBoom", "minecraft:warden");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Thorns, "thorns", "death.attack.thorns.item");
    GMLib_Mod::addDamageCause(ActorDamageCause::Void, "outOfWorld", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Suicide, "suicide", "null");
    GMLib_Mod::addDamageCause(ActorDamageCause::Projectile, "fireball", "minecraft:small_fireball");
    GMLib_Mod::addDamageCause(ActorDamageCause::Projectile, "trident", "minecraft:thrown_trident");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Projectile, "spit", "death.attack.spit", "minecraft:llama_spit");
    GMLib_Mod::addDamageCauseWithMessage(ActorDamageCause::Projectile, "bullet", "death.attack.bullet", "minecraft:shulker_bullet");
    GMLib_Mod::addDamageCause(ActorDamageCause::Projectile, "arrow", "minecraft:arrow");
    GMLib_Mod::addDamageCause(ActorDamageCause::Projectile, "thrown");
    //GMLib_Mod::addDamageCause(ActorDamageCause::Projectile, "generic", "null");
}

void buildResourcePack() {
    //GMLib_Mod::addResourcePack();
}

void LoadPlugin() {
    GMLib_Mod::setEnableDeathLog(true);
    GMLib_Mod::setFixWeaponName();
    buildResourcePack();
    regesterDamageCause();
    Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
        Logger("Server").info("{}",fmt::format(fg(fmt::color::yellow),ev.mPlayer->getName() + "加入了游戏"));
        return true;
    });
    Event::PlayerLeftEvent::subscribe([](const Event::PlayerLeftEvent& ev) {
        Logger("Server").info("{}",fmt::format(fg(fmt::color::yellow),ev.mPlayer->getName() + "退出了游戏"));
        return true;
    });
}