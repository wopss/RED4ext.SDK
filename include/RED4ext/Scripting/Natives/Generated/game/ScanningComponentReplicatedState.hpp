#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameScanningComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::ScanningState scanningState; // 20
    float pctScanned; // 24
    uint8_t unk28[0x2C - 0x28]; // 28
    StaticArray<net::PeerID, 8> controllingPeerIDs; // 2C
};
RED4EXT_ASSERT_SIZE(ScanningComponentReplicatedState, 0x38);
} // namespace game
using gameScanningComponentReplicatedState = game::ScanningComponentReplicatedState;
} // namespace RED4ext

// clang-format on
