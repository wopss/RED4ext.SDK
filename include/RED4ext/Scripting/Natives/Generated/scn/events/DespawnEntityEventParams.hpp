#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>

namespace RED4ext
{
namespace scn::events
{
struct DespawnEntityEventParams
{
    static constexpr const char* NAME = "scneventsDespawnEntityEventParams";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 00
};
RED4EXT_ASSERT_SIZE(DespawnEntityEventParams, 0x4);
} // namespace scn::events
using scneventsDespawnEntityEventParams = scn::events::DespawnEntityEventParams;
} // namespace RED4ext

// clang-format on
