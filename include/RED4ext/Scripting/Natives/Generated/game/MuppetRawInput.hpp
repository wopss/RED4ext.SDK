#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComponent.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetRawInput : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetRawInput";
    static constexpr const char* ALIAS = "MuppetRawInput";

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetRawInput, 0x98);
} // namespace game
using gameMuppetRawInput = game::MuppetRawInput;
using MuppetRawInput = game::MuppetRawInput;
} // namespace RED4ext

// clang-format on
