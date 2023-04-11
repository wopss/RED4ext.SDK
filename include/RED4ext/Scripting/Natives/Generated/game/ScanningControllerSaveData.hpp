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
struct ScanningControllerSaveData : ISerializable
{
    static constexpr const char* NAME = "gameScanningControllerSaveData";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::EntityID> taggedObjectIDs; // 30
};
RED4EXT_ASSERT_SIZE(ScanningControllerSaveData, 0x40);
} // namespace game
using gameScanningControllerSaveData = game::ScanningControllerSaveData;
} // namespace RED4ext

// clang-format on
