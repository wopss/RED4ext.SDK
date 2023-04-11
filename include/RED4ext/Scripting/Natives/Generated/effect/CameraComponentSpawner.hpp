#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/Spawner.hpp>

namespace RED4ext
{
namespace effect
{
struct CameraComponentSpawner : effect::Spawner
{
    static constexpr const char* NAME = "effectCameraComponentSpawner";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CameraComponentSpawner, 0x30);
} // namespace effect
using effectCameraComponentSpawner = effect::CameraComponentSpawner;
} // namespace RED4ext

// clang-format on
