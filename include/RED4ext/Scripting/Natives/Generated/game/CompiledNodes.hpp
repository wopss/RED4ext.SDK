#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CompiledSmartObjectNode.hpp>

namespace RED4ext
{
namespace game
{
struct CompiledNodes : ISerializable
{
    static constexpr const char* NAME = "gameCompiledNodes";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CompiledSmartObjectNode> compiledSmartObjects; // 30
};
RED4EXT_ASSERT_SIZE(CompiledNodes, 0x40);
} // namespace game
using gameCompiledNodes = game::CompiledNodes;
} // namespace RED4ext

// clang-format on
