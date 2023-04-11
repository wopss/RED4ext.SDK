#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace game
{
struct PhotoModeObjectPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "gamePhotoModeObjectPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModeObjectPositionProvider, 0x70);
} // namespace game
using gamePhotoModeObjectPositionProvider = game::PhotoModeObjectPositionProvider;
} // namespace RED4ext

// clang-format on
