#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitDetectionDebugFrameDataShapeEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game { struct HitRepresentationComponent; }

namespace game
{
struct HitDetectionDebugFrameData
{
    static constexpr const char* NAME = "gameHitDetectionDebugFrameData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::HitRepresentationComponent> mponent; // 00
    bool t; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    net::Time tTime; // 18
    uint8_t unk20[0x28 - 0x20]; // 20
    DynArray<game::HitDetectionDebugFrameDataShapeEntry> apes; // 28
    uint8_t unk38[0x48 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(HitDetectionDebugFrameData, 0x48);
} // namespace game
using gameHitDetectionDebugFrameData = game::HitDetectionDebugFrameData;
} // namespace RED4ext

// clang-format on
