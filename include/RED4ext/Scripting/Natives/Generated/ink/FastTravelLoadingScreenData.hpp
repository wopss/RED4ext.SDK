#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILoadingScreenPersistentData.hpp>

namespace RED4ext
{
namespace ink
{
struct FastTravelLoadingScreenData : ink::ILoadingScreenPersistentData
{
    static constexpr const char* NAME = "inkFastTravelLoadingScreenData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(FastTravelLoadingScreenData, 0x10);
} // namespace ink
using inkFastTravelLoadingScreenData = ink::FastTravelLoadingScreenData;
} // namespace RED4ext

// clang-format on
