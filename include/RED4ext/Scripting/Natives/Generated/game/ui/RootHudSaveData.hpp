#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/HUDEntryVisibilityData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RootHudSaveData : ISerializable
{
    static constexpr const char* NAME = "gameuiRootHudSaveData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<quest::HUDEntryVisibilityData> entriesVisibility; // 38
};
RED4EXT_ASSERT_SIZE(RootHudSaveData, 0x48);
} // namespace game::ui
using gameuiRootHudSaveData = game::ui::RootHudSaveData;
} // namespace RED4ext

// clang-format on
