#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ReferencePointId.hpp>

namespace RED4ext
{
namespace scn
{
struct ReferencePointDef
{
    static constexpr const char* NAME = "scnReferencePointDef";
    static constexpr const char* ALIAS = NAME;

    scn::ReferencePointId id; // 00
    Vector3 offset; // 04
    scn::Marker originMarker; // 10
};
RED4EXT_ASSERT_SIZE(ReferencePointDef, 0x70);
} // namespace scn
using scnReferencePointDef = scn::ReferencePointDef;
} // namespace RED4ext

// clang-format on
