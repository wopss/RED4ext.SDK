#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) InteriorAreaNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldInteriorAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InteriorAreaNodeInstance, 0x100);
} // namespace world
using worldInteriorAreaNodeInstance = world::InteriorAreaNodeInstance;
} // namespace RED4ext

// clang-format on
