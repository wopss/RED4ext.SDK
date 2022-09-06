#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct IParticleModule : ISerializable
{
    static constexpr const char* NAME = "IParticleModule";
    static constexpr const char* ALIAS = NAME;

    CString editorName; // 30
    CString editorGroup; // 50
    uint8_t unk70[0x74 - 0x70]; // 70
    bool isEnabled; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(IParticleModule, 0x78);
} // namespace RED4ext

// clang-format on
