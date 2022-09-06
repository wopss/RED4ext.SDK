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
struct Multilayer_Setup;

struct CookedMultilayer_Setup : CResource
{
    static constexpr const char* NAME = "CookedMultilayer_Setup";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<Multilayer_Setup>> dependencies; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CookedMultilayer_Setup, 0x60);
} // namespace RED4ext

// clang-format on
