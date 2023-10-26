#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools
{
struct __declspec(align(0x10)) MessageLocation_BoundingBox : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_BoundingBox";
    static constexpr const char* ALIAS = NAME;

    MessageResourcePath resourcePath; // 30
    uint8_t unk38[0x40 - 0x38]; // 38
    Box box; // 40
};
RED4EXT_ASSERT_SIZE(MessageLocation_BoundingBox, 0x60);
} // namespace tools
using toolsMessageLocation_BoundingBox = tools::MessageLocation_BoundingBox;
} // namespace RED4ext

// clang-format on
