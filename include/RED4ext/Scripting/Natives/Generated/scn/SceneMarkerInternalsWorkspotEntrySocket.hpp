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
struct __declspec(align(0x10)) SceneMarkerInternalsWorkspotEntrySocket
{
    static constexpr const char* NAME = "scnSceneMarkerInternalsWorkspotEntrySocket";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Transform transform; // 10
};
RED4EXT_ASSERT_SIZE(SceneMarkerInternalsWorkspotEntrySocket, 0x30);
} // namespace scn
using scnSceneMarkerInternalsWorkspotEntrySocket = scn::SceneMarkerInternalsWorkspotEntrySocket;
} // namespace RED4ext

// clang-format on
