#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionSelectSlot : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionSelectSlot";
    static constexpr const char* ALIAS = NAME;

    int32_t targetSlot; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(MuppetInputActionSelectSlot, 0x10);
} // namespace game
using gameMuppetInputActionSelectSlot = game::MuppetInputActionSelectSlot;
} // namespace RED4ext

// clang-format on
