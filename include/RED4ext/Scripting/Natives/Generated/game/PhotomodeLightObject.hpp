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
struct PhotomodeLightObject : game::Object
{
    static constexpr const char* NAME = "gamePhotomodeLightObject";
    static constexpr const char* ALIAS = "PhotomodeLightObject";

    uint8_t unk240[0x350 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(PhotomodeLightObject, 0x350);
} // namespace game
using gamePhotomodeLightObject = game::PhotomodeLightObject;
using PhotomodeLightObject = game::PhotomodeLightObject;
} // namespace RED4ext

// clang-format on
