#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningControllerReplicatedState : ISerializable
{
    static constexpr const char* NAME = "gameScanningControllerReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    DynArray<ent::EntityID> taggedObjectIDs; // 40
};
RED4EXT_ASSERT_SIZE(ScanningControllerReplicatedState, 0x50);
} // namespace game
using gameScanningControllerReplicatedState = game::ScanningControllerReplicatedState;
} // namespace RED4ext

// clang-format on
