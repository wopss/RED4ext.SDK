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
struct AimAssistBulletMagnetism_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAimAssistBulletMagnetism_Record";
    static constexpr const char* ALIAS = "AimAssistBulletMagnetism_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AimAssistBulletMagnetism_Record, 0xA0);
} // namespace game::data
using gamedataAimAssistBulletMagnetism_Record = game::data::AimAssistBulletMagnetism_Record;
using AimAssistBulletMagnetism_Record = game::data::AimAssistBulletMagnetism_Record;
} // namespace RED4ext

// clang-format on
