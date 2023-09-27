#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct TPPCameraSetup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTPPCameraSetup_Record";
    static constexpr const char* ALIAS = "TPPCameraSetup_Record";

    uint8_t unk48[0x210 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TPPCameraSetup_Record, 0x210);
} // namespace game::data
using gamedataTPPCameraSetup_Record = game::data::TPPCameraSetup_Record;
using TPPCameraSetup_Record = game::data::TPPCameraSetup_Record;
} // namespace RED4ext

// clang-format on
