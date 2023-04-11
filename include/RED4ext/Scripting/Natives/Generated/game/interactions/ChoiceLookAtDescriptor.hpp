#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceLookAtType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/OrbID.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceLookAtDescriptor
{
    static constexpr const char* NAME = "gameinteractionsChoiceLookAtDescriptor";
    static constexpr const char* ALIAS = NAME;

    game::interactions::ChoiceLookAtType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName slotName; // 08
    Vector3 offset; // 10
    game::interactions::OrbID orbId; // 1C
};
RED4EXT_ASSERT_SIZE(ChoiceLookAtDescriptor, 0x20);
} // namespace game::interactions
using gameinteractionsChoiceLookAtDescriptor = game::interactions::ChoiceLookAtDescriptor;
} // namespace RED4ext

// clang-format on
