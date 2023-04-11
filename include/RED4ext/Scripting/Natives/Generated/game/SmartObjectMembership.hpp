#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectMembershipMemberShip.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectMembership : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectMembership";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::SmartObjectMembershipMemberShip> members; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SmartObjectMembership, 0x70);
} // namespace game
using gameSmartObjectMembership = game::SmartObjectMembership;
} // namespace RED4ext

// clang-format on
