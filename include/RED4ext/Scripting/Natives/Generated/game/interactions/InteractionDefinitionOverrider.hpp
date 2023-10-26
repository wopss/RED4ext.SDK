#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::interactions { struct IShapeDefinition; }

namespace game::interactions
{
struct __declspec(align(0x10)) InteractionDefinitionOverrider
{
    static constexpr const char* NAME = "gameinteractionsInteractionDefinitionOverrider";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    DynArray<Handle<game::interactions::IShapeDefinition>> shapes; // 10
    DynArray<Handle<game::interactions::IShapeDefinition>> negativeShapes; // 20
    float priorityMultiplier; // 30
    uint8_t unk34[0x60 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(InteractionDefinitionOverrider, 0x60);
} // namespace game::interactions
using gameinteractionsInteractionDefinitionOverrider = game::interactions::InteractionDefinitionOverrider;
} // namespace RED4ext

// clang-format on
