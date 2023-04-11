#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneInstanceOwnerId.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneInstanceId
{
    static constexpr const char* NAME = "scnSceneInstanceId";
    static constexpr const char* ALIAS = NAME;

    scn::SceneId sceneId; // 00
    scn::SceneInstanceOwnerId ownerId; // 08
    uint8_t internalId; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    uint64_t hash; // 18
};
RED4EXT_ASSERT_SIZE(SceneInstanceId, 0x20);
} // namespace scn
using scnSceneInstanceId = scn::SceneInstanceId;
} // namespace RED4ext

// clang-format on
