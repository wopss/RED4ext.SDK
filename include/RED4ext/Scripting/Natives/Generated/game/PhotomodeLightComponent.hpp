#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PhotomodeLightComponent : ent::LightComponent
{
    static constexpr const char* NAME = "gamePhotomodeLightComponent";
    static constexpr const char* ALIAS = "PhotomodeLightComponent";

    uint8_t unk200[0x270 - 0x200]; // 200
};
RED4EXT_ASSERT_SIZE(PhotomodeLightComponent, 0x270);
} // namespace game
using gamePhotomodeLightComponent = game::PhotomodeLightComponent;
using PhotomodeLightComponent = game::PhotomodeLightComponent;
} // namespace RED4ext

// clang-format on
