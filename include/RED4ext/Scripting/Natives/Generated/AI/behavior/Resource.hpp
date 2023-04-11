#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/TreeArgumentsDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace AI::behavior { struct BehaviorDelegate; }
namespace AI::behavior { struct TreeNodeDefinition; }

namespace AI::behavior
{
struct Resource : CResource
{
    static constexpr const char* NAME = "AIbehaviorResource";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::TreeNodeDefinition> root; // 40
    AI::TreeArgumentsDefinition arguments; // 50
    Handle<AI::behavior::BehaviorDelegate> delegate; // 68
    DynArray<CName> initializationEvents; // 78
};
RED4EXT_ASSERT_SIZE(Resource, 0x88);
} // namespace AI::behavior
using AIbehaviorResource = AI::behavior::Resource;
} // namespace RED4ext

// clang-format on
