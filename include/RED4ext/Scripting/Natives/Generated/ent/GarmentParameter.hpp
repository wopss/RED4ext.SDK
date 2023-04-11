#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/GarmentParameterComponentData.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/CollarAreaParams.hpp>

namespace RED4ext
{
namespace ent
{
struct GarmentParameter : ent::EntityParameter
{
    static constexpr const char* NAME = "entGarmentParameter";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::GarmentParameterComponentData> componentsData; // 30
    CDateTime lastUpdateDateTime; // 40
    garment::CollarAreaParams collarArea; // 48
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(GarmentParameter, 0x68);
} // namespace ent
using entGarmentParameter = ent::GarmentParameter;
} // namespace RED4ext

// clang-format on
