#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeCTreeResource.hpp>

namespace RED4ext
{
namespace AI { struct CTreeNodeDefinition; }

namespace AI
{
struct Resource : LibTreeCTreeResource
{
    static constexpr const char* NAME = "AIResource";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::CTreeNodeDefinition> root; // 68
};
RED4EXT_ASSERT_SIZE(Resource, 0x78);
} // namespace AI
using AIResource = AI::Resource;
} // namespace RED4ext

// clang-format on
