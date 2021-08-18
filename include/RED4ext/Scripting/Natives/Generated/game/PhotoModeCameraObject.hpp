#pragma once

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

    uint8_t unk230[0x3C0 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(PhotoModeCameraObject, 0x3C0);
} // namespace game
} // namespace RED4ext
