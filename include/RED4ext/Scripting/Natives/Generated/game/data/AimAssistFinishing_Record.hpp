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
struct AimAssistFinishing_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistFinishing_Record";
    static constexpr const char* ALIAS = "AimAssistFinishing_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistFinishing_Record, 0xA0);
} // namespace game::data
using gamedataAimAssistFinishing_Record = game::data::AimAssistFinishing_Record;
using AimAssistFinishing_Record = game::data::AimAssistFinishing_Record;
} // namespace RED4ext

// clang-format on
