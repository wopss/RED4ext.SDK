#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectInstanceId.hpp>

namespace RED4ext
{
namespace scn
{
struct EffectEntry
{
    static constexpr const char* NAME = "scnEffectEntry";
    static constexpr const char* ALIAS = NAME;

    scn::EffectInstanceId effectInstanceId; // 00
    CName effectName; // 08
};
RED4EXT_ASSERT_SIZE(EffectEntry, 0x10);
} // namespace scn
using scnEffectEntry = scn::EffectEntry;
} // namespace RED4ext

// clang-format on
