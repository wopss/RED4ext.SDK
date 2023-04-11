#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools
{
struct MessageLocation_Point : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_Point";
    static constexpr const char* ALIAS = NAME;

    MessageResourcePath resourcePath; // 30
    Vector3 point; // 38
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(MessageLocation_Point, 0x48);
} // namespace tools
using toolsMessageLocation_Point = tools::MessageLocation_Point;
} // namespace RED4ext

// clang-format on
