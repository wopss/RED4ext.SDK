#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace appearance
{
struct CookedAppearanceData : CResource
{
    static constexpr const char* NAME = "appearanceCookedAppearanceData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<CResource>> dependencies; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    uint32_t totalSizeOnDisk; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(CookedAppearanceData, 0x68);
} // namespace appearance
using appearanceCookedAppearanceData = appearance::CookedAppearanceData;
} // namespace RED4ext

// clang-format on
