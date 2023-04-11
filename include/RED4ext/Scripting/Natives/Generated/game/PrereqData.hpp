#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqCheckData.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqData
{
    static constexpr const char* NAME = "gamePrereqData";
    static constexpr const char* ALIAS = "PrereqData";

    DynArray<game::PrereqCheckData> prereqList; // 00
    bool bAndValues; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(PrereqData, 0x18);
} // namespace game
using gamePrereqData = game::PrereqData;
using PrereqData = game::PrereqData;
} // namespace RED4ext

// clang-format on
