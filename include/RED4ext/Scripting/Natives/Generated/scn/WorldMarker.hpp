#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorldMarkerType.hpp>

namespace RED4ext
{
namespace scn
{
struct WorldMarker
{
    static constexpr const char* NAME = "scnWorldMarker";
    static constexpr const char* ALIAS = NAME;

    scn::WorldMarkerType type; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CName tag; // 08
    NodeRef nodeRef; // 10
};
RED4EXT_ASSERT_SIZE(WorldMarker, 0x18);
} // namespace scn
using scnWorldMarker = scn::WorldMarker;
} // namespace RED4ext

// clang-format on
