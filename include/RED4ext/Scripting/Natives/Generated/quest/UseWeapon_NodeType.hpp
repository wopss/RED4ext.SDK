#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/WeaponUsageType.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct UseWeapon_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questUseWeapon_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::WeaponUsageType usageType; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    Handle<quest::UniversalRef> objectRef; // 38
    CName overrideShootEffect; // 48
    CName weaponSlotName; // 50
    TweakDBID attackTDBID; // 58
};
RED4EXT_ASSERT_SIZE(UseWeapon_NodeType, 0x60);
} // namespace quest
using questUseWeapon_NodeType = quest::UseWeapon_NodeType;
} // namespace RED4ext

// clang-format on
