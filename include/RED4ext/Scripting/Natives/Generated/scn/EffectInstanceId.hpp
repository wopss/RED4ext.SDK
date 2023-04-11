#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectId.hpp>

namespace RED4ext
{
namespace scn
{
struct EffectInstanceId
{
    static constexpr const char* NAME = "scnEffectInstanceId";
    static constexpr const char* ALIAS = NAME;

    scn::EffectId effectId; // 00
    uint32_t id; // 04
};
RED4EXT_ASSERT_SIZE(EffectInstanceId, 0x8);
} // namespace scn
using scnEffectInstanceId = scn::EffectInstanceId;
} // namespace RED4ext

// clang-format on
