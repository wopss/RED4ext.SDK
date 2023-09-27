#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SyncNodeSignal.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneSharedState : ISerializable
{
    static constexpr const char* NAME = "scnSceneSharedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    CName entrypoint; // 40
    DynArray<scn::SyncNodeSignal> syncNodesVisited; // 48
    uint8_t unk58[0x118 - 0x58]; // 58
    uint64_t instanceHash; // 118
    uint8_t unk120[0x140 - 0x120]; // 120
    bool finishedOnClient; // 140
    bool finishedOnServer; // 141
    uint8_t unk142[0x148 - 0x142]; // 142
};
RED4EXT_ASSERT_SIZE(SceneSharedState, 0x148);
} // namespace scn
using scnSceneSharedState = scn::SceneSharedState;
} // namespace RED4ext

// clang-format on
