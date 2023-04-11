#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneMarkerInternalsAnimEventEntry
{
    static constexpr const char* NAME = "scnSceneMarkerInternalsAnimEventEntry";
    static constexpr const char* ALIAS = NAME;

    Vector3 startPos; // 00
    Vector3 endPos; // 0C
    Vector3 startDir; // 18
    Vector3 endDir; // 24
    CName startName; // 30
    CName endName; // 38
    uint8_t flags; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SceneMarkerInternalsAnimEventEntry, 0x48);
} // namespace scn
using scnSceneMarkerInternalsAnimEventEntry = scn::SceneMarkerInternalsAnimEventEntry;
} // namespace RED4ext

// clang-format on
