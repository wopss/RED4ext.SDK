#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinData.hpp>

namespace RED4ext
{
namespace game::mappins { struct IPointOfInterestVariant; }

namespace game::mappins { 
struct PointOfInterestMappinData : game::mappins::IMappinData
{
    static constexpr const char* NAME = "gamemappinsPointOfInterestMappinData";
    static constexpr const char* ALIAS = "PointOfInterestMappinData";

    Handle<game::mappins::IPointOfInterestVariant> typedVariant; // 08
    bool active; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(PointOfInterestMappinData, 0x20);
} // namespace game::mappins
using PointOfInterestMappinData = game::mappins::PointOfInterestMappinData;
} // namespace RED4ext
