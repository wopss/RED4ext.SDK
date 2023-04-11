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
struct InteriorAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldInteriorAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0xB8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(InteriorAreaNotifierInstance, 0xB8);
} // namespace world
using worldInteriorAreaNotifierInstance = world::InteriorAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
