#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PhotoModeCameraObject : game::Object
{
    static constexpr const char* NAME = "gamePhotoModeCameraObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x4B0 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(PhotoModeCameraObject, 0x4B0);
} // namespace game
using gamePhotoModeCameraObject = game::PhotoModeCameraObject;
} // namespace RED4ext

// clang-format on
