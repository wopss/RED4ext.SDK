#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/game/CrowdTrafficDataPackage.hpp>

namespace RED4ext
{
namespace game { 
struct CompiledCrowdData : ISerializable
{
    static constexpr const char* NAME = "gameCompiledCrowdData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CrowdTrafficDataPackage> trafficDataPackages; // 30
};
RED4EXT_ASSERT_SIZE(CompiledCrowdData, 0x40);
} // namespace game
} // namespace RED4ext
