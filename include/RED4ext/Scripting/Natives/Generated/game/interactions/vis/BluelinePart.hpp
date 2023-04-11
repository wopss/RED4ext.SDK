#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct BluelinePart : IScriptable
{
    static constexpr const char* NAME = "gameinteractionsvisBluelinePart";
    static constexpr const char* ALIAS = "BluelinePart";

    bool passed; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    TweakDBID captionIconRecordId; // 44
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(BluelinePart, 0x50);
} // namespace game::interactions::vis
using gameinteractionsvisBluelinePart = game::interactions::vis::BluelinePart;
using BluelinePart = game::interactions::vis::BluelinePart;
} // namespace RED4ext

// clang-format on
