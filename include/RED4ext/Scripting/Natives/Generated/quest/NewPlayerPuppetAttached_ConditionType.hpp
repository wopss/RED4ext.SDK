#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct NewPlayerPuppetAttached_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questNewPlayerPuppetAttached_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NewPlayerPuppetAttached_ConditionType, 0x38);
} // namespace quest
using questNewPlayerPuppetAttached_ConditionType = quest::NewPlayerPuppetAttached_ConditionType;
} // namespace RED4ext

// clang-format on
