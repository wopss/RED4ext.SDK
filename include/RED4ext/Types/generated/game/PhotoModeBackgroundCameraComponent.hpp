#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Color.hpp>
#include <RED4ext/Types/generated/RenderSceneLayer.hpp>
#include <RED4ext/Types/generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Types/generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace game { 
struct PhotoModeBackgroundCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1C0
    uint8_t unk1C8[0x1E0 - 0x1C8]; // 1C8
    CName virtualCameraName; // 1E0
    Ref<world::EnvironmentAreaParameters> env; // 1E8
    WorldRenderAreaSettings params; // 200
    uint8_t unk210[0x8F0 - 0x210]; // 210
    float streamingDistance; // 8F0
    Color backgroundColor; // 8F4
    float depthCutDistance; // 8F8
    RenderSceneLayer renderSceneLayer; // 8FC
    bool overrideBackgroundColor; // 8FD
    uint8_t unk8FE[0x900 - 0x8FE]; // 8FE
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundCameraComponent, 0x900);
} // namespace game
} // namespace RED4ext
