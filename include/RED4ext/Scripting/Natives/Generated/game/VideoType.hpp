#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class VideoType : int8_t
{
    Tutorial_720x405 = 0,
    Tutorial_1024x576 = 1,
    Tutorial_1280x720 = 2,
    Tutorial_1360x768 = 3,
    Unknown = 4,
};
} // namespace game
using gameVideoType = game::VideoType;
using VideoType = game::VideoType;
} // namespace RED4ext

// clang-format on
