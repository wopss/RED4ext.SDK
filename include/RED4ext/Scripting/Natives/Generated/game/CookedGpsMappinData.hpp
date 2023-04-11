#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game
{
struct CookedGpsMappinData
{
    static constexpr const char* NAME = "gameCookedGpsMappinData";
    static constexpr const char* ALIAS = NAME;

    uint32_t journalPathHash; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<Vector3> positions; // 08
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CookedGpsMappinData, 0x20);
} // namespace game
using gameCookedGpsMappinData = game::CookedGpsMappinData;
} // namespace RED4ext

// clang-format on
