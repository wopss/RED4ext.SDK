#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world { 
struct InteriorAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldInteriorAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0xA0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(InteriorAreaNotifierInstance, 0xA0);
} // namespace world
} // namespace RED4ext
