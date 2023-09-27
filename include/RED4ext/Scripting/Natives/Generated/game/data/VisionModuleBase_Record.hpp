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
struct VisionModuleBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVisionModuleBase_Record";
    static constexpr const char* ALIAS = "VisionModuleBase_Record";

    uint8_t unk48[0x178 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VisionModuleBase_Record, 0x178);
} // namespace game::data
using gamedataVisionModuleBase_Record = game::data::VisionModuleBase_Record;
using VisionModuleBase_Record = game::data::VisionModuleBase_Record;
} // namespace RED4ext

// clang-format on
