#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct EquippedPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameEquippedPrereq";
    static constexpr const char* ALIAS = "EquippedPrereq";

    ItemID itemID; // 40
    TweakDBID slot; // 50
};
RED4EXT_ASSERT_SIZE(EquippedPrereq, 0x58);
} // namespace game
using gameEquippedPrereq = game::EquippedPrereq;
using EquippedPrereq = game::EquippedPrereq;
} // namespace RED4ext

// clang-format on
