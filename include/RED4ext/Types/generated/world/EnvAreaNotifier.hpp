#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Types/generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world { struct EnvironmentAreaParameters; }

namespace world { 
struct EnvAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldEnvAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    Ref<world::EnvironmentAreaParameters> env; // B8
    WorldRenderAreaSettings params; // D0
    float blendTimeIn; // E0
    float blendTimeOut; // E4
    uint8_t priority; // E8
    uint8_t unkE9[0xEC - 0xE9]; // E9
    float horizontalFadeDistance; // EC
    float verticalFadeDistance; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
    DynArray<CName> weatherStateNames; // F8
    DynArray<bool> weatherStateValues; // 108
};
RED4EXT_ASSERT_SIZE(EnvAreaNotifier, 0x118);
} // namespace world
} // namespace RED4ext
