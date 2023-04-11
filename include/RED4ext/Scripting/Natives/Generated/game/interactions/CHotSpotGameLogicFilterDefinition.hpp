#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }
namespace game::interactions { struct InteractionScriptedCondition; }

namespace game::interactions
{
struct CHotSpotGameLogicFilterDefinition : ISerializable
{
    static constexpr const char* NAME = "gameinteractionsCHotSpotGameLogicFilterDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<game::IPrereq> hotSpotPrereq; // 30
    Handle<game::IPrereq> activatorPrereq; // 40
    Handle<game::interactions::InteractionScriptedCondition> scriptedConditionClass; // 50
};
RED4EXT_ASSERT_SIZE(CHotSpotGameLogicFilterDefinition, 0x60);
} // namespace game::interactions
using gameinteractionsCHotSpotGameLogicFilterDefinition = game::interactions::CHotSpotGameLogicFilterDefinition;
} // namespace RED4ext

// clang-format on
