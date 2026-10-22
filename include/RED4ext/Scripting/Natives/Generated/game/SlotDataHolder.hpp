#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AmmoData.hpp>

namespace RED4ext
{
namespace game
{
struct SlotDataHolder : IScriptable
{
    static constexpr const char* NAME = "gameSlotDataHolder";
    static constexpr const char* ALIAS = "SlotDataHolder";

    DynArray<game::AmmoData> ammoData; // 40
    uint8_t unk50[0xF0 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(SlotDataHolder, 0xF0);
} // namespace game
using gameSlotDataHolder = game::SlotDataHolder;
using SlotDataHolder = game::SlotDataHolder;
} // namespace RED4ext

// clang-format on
