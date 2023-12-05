#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureCameraComponent.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) HolocallCameraComponent : ent::RenderToTextureCameraComponent
{
    static constexpr const char* NAME = "gameuiHolocallCameraComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(HolocallCameraComponent, 0xA10);
} // namespace game::ui
using gameuiHolocallCameraComponent = game::ui::HolocallCameraComponent;
} // namespace RED4ext

// clang-format on
