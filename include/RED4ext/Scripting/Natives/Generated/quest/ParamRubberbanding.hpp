#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct ParamRubberbanding : ISerializable
{
    static constexpr const char* NAME = "questParamRubberbanding";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> targetRef; // 30
    float targetForwardOffset; // 40
    float minDistance; // 44
    float maxDistance; // 48
    bool stopAndWait; // 4C
    bool teleportToCatchUp; // 4D
    bool stayInFront; // 4E
    uint8_t unk4F[0x50 - 0x4F]; // 4F
};
RED4EXT_ASSERT_SIZE(ParamRubberbanding, 0x50);
} // namespace quest
using questParamRubberbanding = quest::ParamRubberbanding;
} // namespace RED4ext

// clang-format on
