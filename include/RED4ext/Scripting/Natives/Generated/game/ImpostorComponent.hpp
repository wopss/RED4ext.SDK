#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct ImpostorComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameImpostorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB2 - 0x90]; // 90
    bool isCharacterReplica; // B2
    bool addHead; // B3
    bool ignorePlayerHeadSlot; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
    DynArray<TweakDBID> slotIDsToOmit; // B8
    uint8_t unkC8[0xF0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(ImpostorComponent, 0xF0);
} // namespace game
using gameImpostorComponent = game::ImpostorComponent;
} // namespace RED4ext

// clang-format on
