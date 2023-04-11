#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/RandomizerMode.hpp>

namespace RED4ext
{
namespace quest
{
struct RandomizerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questRandomizerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::RandomizerMode mode; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    DynArray<uint8_t> outputWeights; // 50
};
RED4EXT_ASSERT_SIZE(RandomizerNodeDefinition, 0x60);
} // namespace quest
using questRandomizerNodeDefinition = quest::RandomizerNodeDefinition;
} // namespace RED4ext

// clang-format on
