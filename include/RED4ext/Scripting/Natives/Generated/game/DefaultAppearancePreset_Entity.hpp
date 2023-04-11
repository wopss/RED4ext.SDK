#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct DefaultAppearancePreset_Entity : ISerializable
{
    static constexpr const char* NAME = "gameDefaultAppearancePreset_Entity";
    static constexpr const char* ALIAS = NAME;

    uint64_t entityPathHash; // 30
    CName debugEntityPath; // 38
    CName defaultAppearanceName; // 40
};
RED4EXT_ASSERT_SIZE(DefaultAppearancePreset_Entity, 0x48);
} // namespace game
using gameDefaultAppearancePreset_Entity = game::DefaultAppearancePreset_Entity;
} // namespace RED4ext

// clang-format on
