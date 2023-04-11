#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct ItemCreationPrereqDataWrapper : IScriptable
{
    static constexpr const char* NAME = "gameItemCreationPrereqDataWrapper";
    static constexpr const char* ALIAS = "ItemCreationPrereqDataWrapper";

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemCreationPrereqDataWrapper, 0x68);
} // namespace game
using gameItemCreationPrereqDataWrapper = game::ItemCreationPrereqDataWrapper;
using ItemCreationPrereqDataWrapper = game::ItemCreationPrereqDataWrapper;
} // namespace RED4ext

// clang-format on
