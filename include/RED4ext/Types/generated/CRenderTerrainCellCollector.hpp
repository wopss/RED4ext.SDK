#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct CRenderTerrainCellCollector : ISceneStorageCustomData
{
    static constexpr const char* NAME = "CRenderTerrainCellCollector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x1480 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CRenderTerrainCellCollector, 0x1480);
} // namespace RED4ext
