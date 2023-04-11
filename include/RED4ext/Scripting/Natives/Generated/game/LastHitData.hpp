#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct LastHitData
{
    static constexpr const char* NAME = "gameLastHitData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID targetEntityId; // 00
    uint32_t hitType; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<CName> hitShapes; // 10
};
RED4EXT_ASSERT_SIZE(LastHitData, 0x20);
} // namespace game
using gameLastHitData = game::LastHitData;
} // namespace RED4ext

// clang-format on
