#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotDataId.hpp>

namespace RED4ext
{
namespace scn
{
struct WorkspotData : ISerializable
{
    static constexpr const char* NAME = "scnWorkspotData";
    static constexpr const char* ALIAS = NAME;

    scn::SceneWorkspotDataId dataId; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(WorkspotData, 0x38);
} // namespace scn
using scnWorkspotData = scn::WorkspotData;
} // namespace RED4ext

// clang-format on
