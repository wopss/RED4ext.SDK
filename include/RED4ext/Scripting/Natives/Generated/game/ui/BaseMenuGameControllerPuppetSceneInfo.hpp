#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameControllerPuppetGenderInfo.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace game::ui
{
struct BaseMenuGameControllerPuppetSceneInfo
{
    static constexpr const char* NAME = "gameuiBaseMenuGameControllerPuppetSceneInfo";
    static constexpr const char* ALIAS = NAME;

    CName sceneName; // 00
    NodeRef prefabRef; // 08
    NodeRef markerRef; // 10
    RaRef<ent::EntityTemplate> entityTemplate; // 18
    TweakDBID puppetRecordId; // 20
    game::ui::BaseMenuGameControllerPuppetGenderInfo gender; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(BaseMenuGameControllerPuppetSceneInfo, 0x30);
} // namespace game::ui
using gameuiBaseMenuGameControllerPuppetSceneInfo = game::ui::BaseMenuGameControllerPuppetSceneInfo;
} // namespace RED4ext

// clang-format on
