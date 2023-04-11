#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardSerializableID.hpp>

namespace RED4ext
{
namespace game
{
struct BlackboardPropertyBindingDefinition
{
    static constexpr const char* NAME = "gameBlackboardPropertyBindingDefinition";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardSerializableID serializableID; // 00
    DynArray<CName> propertyPath; // 20
    CName propertyType; // 30
};
RED4EXT_ASSERT_SIZE(BlackboardPropertyBindingDefinition, 0x38);
} // namespace game
using gameBlackboardPropertyBindingDefinition = game::BlackboardPropertyBindingDefinition;
} // namespace RED4ext

// clang-format on
