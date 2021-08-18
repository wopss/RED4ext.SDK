#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEventId.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneMarkerInternalsEntry
{
    static constexpr const char* NAME = "scnSceneMarkerInternalsEntry";
    static constexpr const char* ALIAS = NAME;

    scn::SceneEventId eventId; // 00
    CName startName; // 08
    CName endName; // 10
    CName startDisplayName; // 18
    CName endDisplayName; // 20
    uint8_t unk28[0x30 - 0x28]; // 28
    Vector4 startPos; // 30
    Vector4 endPos; // 40
    Vector4 startDir; // 50
    Vector4 endDir; // 60
    uint8_t flags; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(SceneMarkerInternalsEntry, 0x80);
} // namespace scn
} // namespace RED4ext
