#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct PhotoModeCameraObject : game::Object
{
    static constexpr const char* NAME = "gamePhotoModeCameraObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x360 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(PhotoModeCameraObject, 0x360);
} // namespace game
} // namespace RED4ext

// clang-format on
