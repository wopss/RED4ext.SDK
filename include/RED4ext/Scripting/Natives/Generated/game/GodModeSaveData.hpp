#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GodModeSaveEntityData.hpp>

namespace RED4ext
{
namespace game
{
struct GodModeSaveData : ISerializable
{
    static constexpr const char* NAME = "gameGodModeSaveData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::GodModeSaveEntityData> gods; // 30
};
RED4EXT_ASSERT_SIZE(GodModeSaveData, 0x40);
} // namespace game
using gameGodModeSaveData = game::GodModeSaveData;
} // namespace RED4ext

// clang-format on
