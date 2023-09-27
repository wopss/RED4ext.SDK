#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct SEquipSlot
{
    static constexpr const char* NAME = "gameSEquipSlot";
    static constexpr const char* ALIAS = "SEquipSlot";

    ItemID itemID; // 00
    TweakDBID slotID; // 10
    Handle<game::IPrereq> unlockPrereq; // 18
    bool visibleWhenLocked; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(SEquipSlot, 0x30);
} // namespace game
using gameSEquipSlot = game::SEquipSlot;
using SEquipSlot = game::SEquipSlot;
} // namespace RED4ext

// clang-format on
