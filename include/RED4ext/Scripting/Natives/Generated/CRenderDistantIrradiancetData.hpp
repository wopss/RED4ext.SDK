#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CRenderDistantIrradiancetData : ISceneStorageCustomData
{
    static constexpr const char* NAME = "CRenderDistantIrradiancetData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x50 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CRenderDistantIrradiancetData, 0x50);
} // namespace RED4ext

// clang-format on
