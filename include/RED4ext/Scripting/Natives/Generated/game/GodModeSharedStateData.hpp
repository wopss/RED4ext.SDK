#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game
{
struct GodModeSharedStateData
{
    static constexpr const char* NAME = "gameGodModeSharedStateData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::Entity> entity; // 00
    int32_t flags; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(GodModeSharedStateData, 0x18);
} // namespace game
using gameGodModeSharedStateData = game::GodModeSharedStateData;
} // namespace RED4ext

// clang-format on
