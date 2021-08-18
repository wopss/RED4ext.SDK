#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace anim { 
struct ImportFacialTransform
{
    static constexpr const char* NAME = "animImportFacialTransform";
    static constexpr const char* ALIAS = NAME;

    Quaternion rotation; // 00
    Vector3 translation; // 10
    Vector3 scale; // 1C
    uint8_t unk28[0x30 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(ImportFacialTransform, 0x30);
} // namespace anim
} // namespace RED4ext
