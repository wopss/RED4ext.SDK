#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlaySpeed.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct RewindableSectionTimeJump_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questRewindableSectionTimeJump_NodeType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    uint32_t jumpTargetTime; // 40
    float jumpSpeed; // 44
    scn::PlayDirection postJumpPlayDirection; // 48
    scn::PlaySpeed postJumpPlaySpeed; // 4C
};
RED4EXT_ASSERT_SIZE(RewindableSectionTimeJump_NodeType, 0x50);
} // namespace quest
using questRewindableSectionTimeJump_NodeType = quest::RewindableSectionTimeJump_NodeType;
} // namespace RED4ext

// clang-format on
