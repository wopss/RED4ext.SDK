#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetInputState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetSubStepData.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MuppetSubStepData
{
    static constexpr const char* NAME = "gameMuppetSubStepData";
    static constexpr const char* ALIAS = NAME;

    uint32_t frameId; // 00
    uint32_t parentFrameId; // 04
    bool parentFramePrimaryColor; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    game::MuppetInputState inputState; // 10
    uint8_t unk28[0x30 - 0x28]; // 28
    game::MuppetState state; // 30
    DynArray<game::MuppetSubStepData> resimulationSubsteps; // 2E0
};
RED4EXT_ASSERT_SIZE(MuppetSubStepData, 0x2F0);
} // namespace game
using gameMuppetSubStepData = game::MuppetSubStepData;
} // namespace RED4ext

// clang-format on
