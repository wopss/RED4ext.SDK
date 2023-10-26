#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace game
{
struct __declspec(align(0x10)) PhotoModeBackgroundCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1E0
    uint8_t unk1E8[0x200 - 0x1E8]; // 1E8
    CName virtualCameraName; // 200
    Ref<world::EnvironmentAreaParameters> env; // 208
    WorldRenderAreaSettings params; // 220
    uint8_t unk230[0x910 - 0x230]; // 230
    float streamingDistance; // 910
    Color backgroundColor; // 914
    float depthCutDistance; // 918
    RenderSceneLayer renderSceneLayer; // 91C
    bool overrideBackgroundColor; // 91D
    uint8_t unk91E[0x920 - 0x91E]; // 91E
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundCameraComponent, 0x920);
} // namespace game
using gamePhotoModeBackgroundCameraComponent = game::PhotoModeBackgroundCameraComponent;
} // namespace RED4ext

// clang-format on
