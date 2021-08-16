#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest { 
struct ParamRubberbanding : ISerializable
{
    static constexpr const char* NAME = "questParamRubberbanding";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> targetRef; // 30
    float minDistance; // 40
    float maxDistance; // 44
    bool stopAndWait; // 48
    bool teleportToCatchUp; // 49
    bool stayInFront; // 4A
    uint8_t unk4B[0x50 - 0x4B]; // 4B
};
RED4EXT_ASSERT_SIZE(ParamRubberbanding, 0x50);
} // namespace quest
} // namespace RED4ext
