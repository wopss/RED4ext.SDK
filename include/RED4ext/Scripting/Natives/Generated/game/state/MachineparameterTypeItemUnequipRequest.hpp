#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineparameterTypeItemUnequipRequest : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeItemUnequipRequest";
    static constexpr const char* ALIAS = "ItemUnequipRequest";

    TweakDBID slotId; // 40
    ItemID itemId; // 48
    bool instant; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeItemUnequipRequest, 0x60);
} // namespace game::state
using gamestateMachineparameterTypeItemUnequipRequest = game::state::MachineparameterTypeItemUnequipRequest;
using ItemUnequipRequest = game::state::MachineparameterTypeItemUnequipRequest;
} // namespace RED4ext

// clang-format on
