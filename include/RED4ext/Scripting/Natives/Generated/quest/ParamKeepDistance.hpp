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
struct ParamKeepDistance : ISerializable
{
    static constexpr const char* NAME = "questParamKeepDistance";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> companionTargetRef; // 30
    float distance; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ParamKeepDistance, 0x48);
} // namespace quest
using questParamKeepDistance = quest::ParamKeepDistance;
} // namespace RED4ext

// clang-format on
