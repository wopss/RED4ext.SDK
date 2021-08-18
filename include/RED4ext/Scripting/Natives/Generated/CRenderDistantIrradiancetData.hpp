#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct CRenderDistantIrradiancetData : ISceneStorageCustomData
{
    static constexpr const char* NAME = "CRenderDistantIrradiancetData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x50 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CRenderDistantIrradiancetData, 0x50);
} // namespace RED4ext
