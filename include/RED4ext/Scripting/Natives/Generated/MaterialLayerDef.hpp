#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
struct CMaterialInstance;

struct MaterialLayerDef
{
    static constexpr const char* NAME = "MaterialLayerDef";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint32_t size; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<Color> colorPalette; // 10
    Ref<CMaterialInstance> material; // 20
};
RED4EXT_ASSERT_SIZE(MaterialLayerDef, 0x38);
} // namespace RED4ext

// clang-format on
