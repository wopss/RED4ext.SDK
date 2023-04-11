#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct CookedPointOfInterestMappinData
{
    static constexpr const char* NAME = "gameCookedPointOfInterestMappinData";
    static constexpr const char* ALIAS = NAME;

    uint32_t journalPathHash; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    ent::EntityID entityID; // 08
    Vector3 position; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(CookedPointOfInterestMappinData, 0x20);
} // namespace game
using gameCookedPointOfInterestMappinData = game::CookedPointOfInterestMappinData;
} // namespace RED4ext

// clang-format on
