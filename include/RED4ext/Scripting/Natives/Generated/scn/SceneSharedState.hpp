#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SyncNodeSignal.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneSharedState : ISerializable
{
    static constexpr const char* NAME = "scnSceneSharedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    CName entrypoint; // 40
    DynArray<scn::SyncNodeSignal> syncNodesVisited; // 48
    uint8_t unk58[0x160 - 0x58]; // 58
    uint64_t instanceHash; // 160
    uint8_t unk168[0x188 - 0x168]; // 168
    bool finishedOnClient; // 188
    bool finishedOnServer; // 189
    uint8_t unk18A[0x190 - 0x18A]; // 18A
};
RED4EXT_ASSERT_SIZE(SceneSharedState, 0x190);
} // namespace scn
} // namespace RED4ext
