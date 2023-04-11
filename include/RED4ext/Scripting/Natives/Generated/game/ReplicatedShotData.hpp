#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ReplicatedShotData
{
    static constexpr const char* NAME = "gameReplicatedShotData";
    static constexpr const char* ALIAS = NAME;

    net::Time timeStamp; // 00
    TweakDBID attackId; // 08
    WeakHandle<game::Object> target; // 10
    Vector3 targetLocalOffset; // 20
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(ReplicatedShotData, 0x30);
} // namespace game
using gameReplicatedShotData = game::ReplicatedShotData;
} // namespace RED4ext

// clang-format on
