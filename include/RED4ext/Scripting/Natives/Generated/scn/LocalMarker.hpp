#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) LocalMarker
{
    static constexpr const char* NAME = "scnLocalMarker";
    static constexpr const char* ALIAS = NAME;

    Transform transformLS; // 00
    CName name; // 20
    uint8_t unk28[0x30 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(LocalMarker, 0x30);
} // namespace scn
using scnLocalMarker = scn::LocalMarker;
} // namespace RED4ext

// clang-format on
