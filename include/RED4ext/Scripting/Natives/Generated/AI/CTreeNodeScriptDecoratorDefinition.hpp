#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeExtendableNodeDefinition.hpp>

namespace RED4ext
{
namespace game { struct ActionScript; }

namespace AI
{
struct CTreeNodeScriptDecoratorDefinition : AI::CTreeExtendableNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeScriptDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<game::ActionScript> script; // 48
    CName scriptName; // 58
};
RED4EXT_ASSERT_SIZE(CTreeNodeScriptDecoratorDefinition, 0x60);
} // namespace AI
using AICTreeNodeScriptDecoratorDefinition = AI::CTreeNodeScriptDecoratorDefinition;
} // namespace RED4ext

// clang-format on
