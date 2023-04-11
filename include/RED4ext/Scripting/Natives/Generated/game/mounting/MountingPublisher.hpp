#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/IMountingPublisher.hpp>

namespace RED4ext
{
namespace game::mounting
{
struct MountingPublisher : game::mounting::IMountingPublisher
{
    static constexpr const char* NAME = "gamemountingMountingPublisher";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x18C0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MountingPublisher, 0x18C0);
} // namespace game::mounting
using gamemountingMountingPublisher = game::mounting::MountingPublisher;
} // namespace RED4ext

// clang-format on
