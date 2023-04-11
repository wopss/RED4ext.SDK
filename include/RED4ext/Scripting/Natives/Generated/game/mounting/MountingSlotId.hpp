#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::mounting
{
struct MountingSlotId
{
    static constexpr const char* NAME = "gamemountingMountingSlotId";
    static constexpr const char* ALIAS = "MountingSlotId";

    CName id; // 00
};
RED4EXT_ASSERT_SIZE(MountingSlotId, 0x8);
} // namespace game::mounting
using gamemountingMountingSlotId = game::mounting::MountingSlotId;
using MountingSlotId = game::mounting::MountingSlotId;
} // namespace RED4ext

// clang-format on
