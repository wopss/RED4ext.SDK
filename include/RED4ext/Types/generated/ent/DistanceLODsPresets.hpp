#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/LODDefinition.hpp>

namespace RED4ext
{
namespace ent { 
struct DistanceLODsPresets : ISerializable
{
    static constexpr const char* NAME = "entDistanceLODsPresets";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<ent::LODDefinition, 4> definitions; // 30
};
RED4EXT_ASSERT_SIZE(DistanceLODsPresets, 0x298);
} // namespace ent
} // namespace RED4ext
