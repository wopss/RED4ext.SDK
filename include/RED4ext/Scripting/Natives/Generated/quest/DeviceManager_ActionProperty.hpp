#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest { 
struct DeviceManager_ActionProperty
{
    static constexpr const char* NAME = "questDeviceManager_ActionProperty";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Variant value; // 08
    float min; // 20
    float max; // 24
};
RED4EXT_ASSERT_SIZE(DeviceManager_ActionProperty, 0x28);
} // namespace quest
} // namespace RED4ext
