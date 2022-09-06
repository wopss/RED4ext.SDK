#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct XmlResource : CResource
{
    static constexpr const char* NAME = "XmlResource";
    static constexpr const char* ALIAS = NAME;

    CString data; // 40
    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(XmlResource, 0x68);
} // namespace RED4ext

// clang-format on
