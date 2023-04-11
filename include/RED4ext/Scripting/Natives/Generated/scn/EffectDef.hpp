#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectId.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace scn
{
struct EffectDef
{
    static constexpr const char* NAME = "scnEffectDef";
    static constexpr const char* ALIAS = NAME;

    scn::EffectId id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    RaRef<world::Effect> effect; // 08
};
RED4EXT_ASSERT_SIZE(EffectDef, 0x10);
} // namespace scn
using scnEffectDef = scn::EffectDef;
} // namespace RED4ext

// clang-format on
