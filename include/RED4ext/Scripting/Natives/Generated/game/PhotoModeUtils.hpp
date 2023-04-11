#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct PhotoModeUtils
{
    static constexpr const char* NAME = "gamePhotoModeUtils";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(PhotoModeUtils, 0x1);
} // namespace game
using gamePhotoModeUtils = game::PhotoModeUtils;
} // namespace RED4ext

// clang-format on
