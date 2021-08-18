#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct IPointOfInterestVariant : ISerializable
{
    static constexpr const char* NAME = "gamemappinsIPointOfInterestVariant";
    static constexpr const char* ALIAS = NAME;

    TweakDBID mappinType; // 30
};
RED4EXT_ASSERT_SIZE(IPointOfInterestVariant, 0x38);
} // namespace game::mappins
} // namespace RED4ext
