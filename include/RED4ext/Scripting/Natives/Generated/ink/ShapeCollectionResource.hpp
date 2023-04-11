#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapePreset.hpp>

namespace RED4ext
{
namespace ink
{
struct ShapeCollectionResource : CResource
{
    static constexpr const char* NAME = "inkShapeCollectionResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::ShapePreset> presets; // 40
};
RED4EXT_ASSERT_SIZE(ShapeCollectionResource, 0x50);
} // namespace ink
using inkShapeCollectionResource = ink::ShapeCollectionResource;
} // namespace RED4ext

// clang-format on
