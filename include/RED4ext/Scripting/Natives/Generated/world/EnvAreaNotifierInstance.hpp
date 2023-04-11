#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world
{
struct EnvAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldEnvAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(EnvAreaNotifierInstance, 0x88);
} // namespace world
using worldEnvAreaNotifierInstance = world::EnvAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
