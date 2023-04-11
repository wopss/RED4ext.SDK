#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityAppearance_ConditionType : quest::IEntityConditionType
{
    static constexpr const char* NAME = "questEntityAppearance_ConditionType";
    static constexpr const char* ALIAS = NAME;

    CName appearance; // 70
};
RED4EXT_ASSERT_SIZE(EntityAppearance_ConditionType, 0x78);
} // namespace quest
using questEntityAppearance_ConditionType = quest::EntityAppearance_ConditionType;
} // namespace RED4ext

// clang-format on
