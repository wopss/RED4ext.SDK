#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct PhotoModeCameraObject : game::Object
{
    static constexpr const char* NAME = "gamePhotoModeCameraObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x3C0 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(PhotoModeCameraObject, 0x3C0);
} // namespace game
} // namespace RED4ext
