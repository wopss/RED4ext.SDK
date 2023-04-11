#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EPrerequisiteType.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqCheckData
{
    static constexpr const char* NAME = "gamePrereqCheckData";
    static constexpr const char* ALIAS = "PrereqCheckData";

    game::EPrerequisiteType prereqType; // 00
    EComparisonType comparisonType; // 04
    CString contextObject; // 08
    float valueToCompare; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(PrereqCheckData, 0x30);
} // namespace game
using gamePrereqCheckData = game::PrereqCheckData;
using PrereqCheckData = game::PrereqCheckData;
} // namespace RED4ext

// clang-format on
