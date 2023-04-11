#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct IEntityConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questIEntityConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityRef; // 38
};
RED4EXT_ASSERT_SIZE(IEntityConditionType, 0x70);
} // namespace quest
using questIEntityConditionType = quest::IEntityConditionType;
} // namespace RED4ext

// clang-format on
