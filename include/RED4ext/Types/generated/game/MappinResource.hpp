#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/game/CookedGpsMappinData.hpp>
#include <RED4ext/Types/generated/game/CookedMappinData.hpp>
#include <RED4ext/Types/generated/game/CookedMultiMappinData.hpp>

namespace RED4ext
{
namespace game { 
struct MappinResource : CResource
{
    static constexpr const char* NAME = "gameMappinResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CookedMappinData> cookedData; // 40
    DynArray<game::CookedMultiMappinData> cookedMultiData; // 50
    DynArray<game::CookedGpsMappinData> cookedGpsData; // 60
};
RED4EXT_ASSERT_SIZE(MappinResource, 0x70);
} // namespace game
} // namespace RED4ext
