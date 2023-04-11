#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SignalPriorityDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct HardcodedSignalPriorityDefinition : game::SignalPriorityDefinition
{
    static constexpr const char* NAME = "gameHardcodedSignalPriorityDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> signals; // 38
    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(HardcodedSignalPriorityDefinition, 0x78);
} // namespace game
using gameHardcodedSignalPriorityDefinition = game::HardcodedSignalPriorityDefinition;
} // namespace RED4ext

// clang-format on
