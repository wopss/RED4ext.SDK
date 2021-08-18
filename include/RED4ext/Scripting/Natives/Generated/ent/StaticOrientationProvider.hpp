#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IOrientationProvider.hpp>

namespace RED4ext
{
namespace ent { 
struct StaticOrientationProvider : ent::IOrientationProvider
{
    static constexpr const char* NAME = "entStaticOrientationProvider";
    static constexpr const char* ALIAS = NAME;

    Quaternion staticOrientation; // 40
};
RED4EXT_ASSERT_SIZE(StaticOrientationProvider, 0x50);
} // namespace ent
} // namespace RED4ext
