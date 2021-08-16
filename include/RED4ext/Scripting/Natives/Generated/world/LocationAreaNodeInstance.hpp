#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct LocationAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldLocationAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocationAreaNodeInstance, 0x100);
} // namespace world
} // namespace RED4ext
