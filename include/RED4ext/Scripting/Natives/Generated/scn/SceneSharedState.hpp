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
    uint8_t unk58[0x150 - 0x58]; // 58
    uint64_t instanceHash; // 150
    uint8_t unk158[0x178 - 0x158]; // 158
    bool finishedOnClient; // 178
    bool finishedOnServer; // 179
    uint8_t unk17A[0x180 - 0x17A]; // 17A
};
RED4EXT_ASSERT_SIZE(SceneSharedState, 0x180);
} // namespace scn
} // namespace RED4ext
