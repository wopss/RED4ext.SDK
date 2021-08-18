#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct InteriorMapDataUpdater : ISceneStorageCustomData
{
    static constexpr const char* NAME = "InteriorMapDataUpdater";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(InteriorMapDataUpdater, 0x28);
} // namespace RED4ext
