#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/grs/GatherAreaReplicatedInfo.hpp>

namespace RED4ext
{
namespace grs
{
struct GatherAreaManager
{
    static constexpr const char* NAME = "grsGatherAreaManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    grs::GatherAreaReplicatedInfo activeGatherAreaRepInfo; // 30
    uint8_t unk44[0x78 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(GatherAreaManager, 0x78);
} // namespace grs
using grsGatherAreaManager = grs::GatherAreaManager;
} // namespace RED4ext

// clang-format on
