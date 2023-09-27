#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinData.hpp>

namespace RED4ext
{
namespace game::mappins { struct IPointOfInterestVariant; }

namespace game::mappins
{
struct PointOfInterestMappinData : game::mappins::IMappinData
{
    static constexpr const char* NAME = "gamemappinsPointOfInterestMappinData";
    static constexpr const char* ALIAS = "PointOfInterestMappinData";

    Handle<game::mappins::IPointOfInterestVariant> typedVariant; // 08
    bool active; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
    CName slotName; // 20
    Vector3 slotOffset; // 28
    float dynamicMappinRadius; // 34
    TweakDBID staticMappinDef; // 38
    TweakDBID dynamicMappinDef; // 40
};
RED4EXT_ASSERT_SIZE(PointOfInterestMappinData, 0x48);
} // namespace game::mappins
using gamemappinsPointOfInterestMappinData = game::mappins::PointOfInterestMappinData;
using PointOfInterestMappinData = game::mappins::PointOfInterestMappinData;
} // namespace RED4ext

// clang-format on
