#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/Spawner.hpp>

namespace RED4ext
{
namespace effect { 
struct CameraComponentSpawner : effect::Spawner
{
    static constexpr const char* NAME = "effectCameraComponentSpawner";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CameraComponentSpawner, 0x30);
} // namespace effect
} // namespace RED4ext
