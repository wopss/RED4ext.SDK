#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>

namespace RED4ext
{
namespace scn
{
struct OverridePhantomParamsEventParams
{
    static constexpr const char* NAME = "scnOverridePhantomParamsEventParams";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName overrideSpawnEffect; // 08
    CName overrideIdleEffect; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(OverridePhantomParamsEventParams, 0x20);
} // namespace scn
using scnOverridePhantomParamsEventParams = scn::OverridePhantomParamsEventParams;
} // namespace RED4ext

// clang-format on
