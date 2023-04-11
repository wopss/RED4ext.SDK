#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemOverride.hpp>

namespace RED4ext
{
namespace scn
{
struct EventBlendWorkspotSetupParameters : ISerializable
{
    static constexpr const char* NAME = "scnEventBlendWorkspotSetupParameters";
    static constexpr const char* ALIAS = NAME;

    scn::SceneWorkspotInstanceId workspotId; // 30
    work::WorkEntryId sequenceEntryId; // 34
    bool idleOnlyMode; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    DynArray<work::WorkEntryId> workExcludedGestures; // 40
    work::WorkspotItemOverride itemOverride; // 50
};
RED4EXT_ASSERT_SIZE(EventBlendWorkspotSetupParameters, 0x70);
} // namespace scn
using scnEventBlendWorkspotSetupParameters = scn::EventBlendWorkspotSetupParameters;
} // namespace RED4ext

// clang-format on
