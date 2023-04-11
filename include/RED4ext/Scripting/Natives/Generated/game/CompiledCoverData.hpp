#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CompiledSmartObjectData.hpp>

namespace RED4ext
{
namespace game
{
struct CompiledCoverData : game::CompiledSmartObjectData
{
    static constexpr const char* NAME = "gameCompiledCoverData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CompiledCoverData, 0x60);
} // namespace game
using gameCompiledCoverData = game::CompiledCoverData;
} // namespace RED4ext

// clang-format on
