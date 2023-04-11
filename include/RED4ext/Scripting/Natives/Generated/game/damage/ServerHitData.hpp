#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/DamageInfo.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::damage
{
struct ServerHitData : IScriptable
{
    static constexpr const char* NAME = "gamedamageServerHitData";
    static constexpr const char* ALIAS = "ServerHitData";

    uint32_t id; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<game::ui::DamageInfo> damageInfos; // 48
    WeakHandle<game::Object> instigator; // 58
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ServerHitData, 0x70);
} // namespace game::damage
using gamedamageServerHitData = game::damage::ServerHitData;
using ServerHitData = game::damage::ServerHitData;
} // namespace RED4ext

// clang-format on
