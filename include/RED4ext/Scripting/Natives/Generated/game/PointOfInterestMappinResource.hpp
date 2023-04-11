#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CookedPointOfInterestMappinData.hpp>

namespace RED4ext
{
namespace game
{
struct PointOfInterestMappinResource : CResource
{
    static constexpr const char* NAME = "gamePointOfInterestMappinResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CookedPointOfInterestMappinData> cookedData; // 40
};
RED4EXT_ASSERT_SIZE(PointOfInterestMappinResource, 0x50);
} // namespace game
using gamePointOfInterestMappinResource = game::PointOfInterestMappinResource;
} // namespace RED4ext

// clang-format on
