#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BinkVideoRecord.hpp>

namespace RED4ext
{
namespace game
{
struct BinkVideoData : ISerializable
{
    static constexpr const char* NAME = "gameBinkVideoData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::BinkVideoRecord> data; // 30
};
RED4EXT_ASSERT_SIZE(BinkVideoData, 0x40);
} // namespace game
using gameBinkVideoData = game::BinkVideoData;
} // namespace RED4ext

// clang-format on
