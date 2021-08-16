#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace community { 
struct SpawnInitializer : ISerializable
{
    static constexpr const char* NAME = "communitySpawnInitializer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SpawnInitializer, 0x30);
} // namespace community
} // namespace RED4ext
