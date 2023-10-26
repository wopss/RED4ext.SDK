#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneMarkerInternalsWorkspotEntrySocket.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) SceneMarkerInternalsWorkspotEntry
{
    static constexpr const char* NAME = "scnSceneMarkerInternalsWorkspotEntry";
    static constexpr const char* ALIAS = NAME;

    CRUID instanceId; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Transform instanceOrigin; // 10
    DynArray<scn::SceneMarkerInternalsWorkspotEntrySocket> entries; // 30
    DynArray<scn::SceneMarkerInternalsWorkspotEntrySocket> exits; // 40
};
RED4EXT_ASSERT_SIZE(SceneMarkerInternalsWorkspotEntry, 0x50);
} // namespace scn
using scnSceneMarkerInternalsWorkspotEntry = scn::SceneMarkerInternalsWorkspotEntry;
} // namespace RED4ext

// clang-format on
