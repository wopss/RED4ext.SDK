#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineparameterTypeItemEquipRequest : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeItemEquipRequest";
    static constexpr const char* ALIAS = "ItemEquipRequest";

    TweakDBID slotId; // 40
    ItemID itemId; // 48
    ERenderingPlane startingRenderingPlane; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeItemEquipRequest, 0x60);
} // namespace game::state
using gamestateMachineparameterTypeItemEquipRequest = game::state::MachineparameterTypeItemEquipRequest;
using ItemEquipRequest = game::state::MachineparameterTypeItemEquipRequest;
} // namespace RED4ext

// clang-format on
