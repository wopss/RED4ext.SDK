#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>

namespace RED4ext
{
namespace game { struct CompiledSmartObjectData; }

namespace game
{
struct __declspec(align(0x10)) CompiledSmartObjectNode
{
    static constexpr const char* NAME = "gameCompiledSmartObjectNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    WorldTransform worldTransform; // 30
    Handle<game::CompiledSmartObjectData> compiledData; // 50
};
RED4EXT_ASSERT_SIZE(CompiledSmartObjectNode, 0x60);
} // namespace game
using gameCompiledSmartObjectNode = game::CompiledSmartObjectNode;
} // namespace RED4ext

// clang-format on
