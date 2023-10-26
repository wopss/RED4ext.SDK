#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace effect
{
struct __declspec(align(0x10)) RootEntry
{
    static constexpr const char* NAME = "effectRootEntry";
    static constexpr const char* ALIAS = NAME;

    Vector3 relativePosition; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Quaternion relativeRotation; // 10
};
RED4EXT_ASSERT_SIZE(RootEntry, 0x20);
} // namespace effect
using effectRootEntry = effect::RootEntry;
} // namespace RED4ext

// clang-format on
