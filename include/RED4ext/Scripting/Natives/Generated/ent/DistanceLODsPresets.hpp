#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LODDefinition.hpp>

namespace RED4ext
{
namespace ent
{
struct DistanceLODsPresets : ISerializable
{
    static constexpr const char* NAME = "entDistanceLODsPresets";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<ent::LODDefinition, 4> definitions; // 30
};
RED4EXT_ASSERT_SIZE(DistanceLODsPresets, 0x378);
} // namespace ent
using entDistanceLODsPresets = ent::DistanceLODsPresets;
} // namespace RED4ext

// clang-format on
