#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace gen { 
struct RandomizerMarker : world::IMarker
{
    static constexpr const char* NAME = "genRandomizerMarker";
    static constexpr const char* ALIAS = NAME;

    CString id; // 30
    CName templateName; // 50
    float probability; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(RandomizerMarker, 0x60);
} // namespace gen
} // namespace RED4ext
