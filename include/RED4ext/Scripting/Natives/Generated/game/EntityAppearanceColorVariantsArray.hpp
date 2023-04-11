#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct EntityAppearanceColorVariantsArray : ISerializable
{
    static constexpr const char* NAME = "gameEntityAppearanceColorVariantsArray";
    static constexpr const char* ALIAS = NAME;

    CName appearanceName; // 30
    DynArray<CName> colorVariants; // 38
};
RED4EXT_ASSERT_SIZE(EntityAppearanceColorVariantsArray, 0x48);
} // namespace game
using gameEntityAppearanceColorVariantsArray = game::EntityAppearanceColorVariantsArray;
} // namespace RED4ext

// clang-format on
