#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectInstanceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledEffectInfo.hpp>

namespace RED4ext
{
namespace scn
{
struct EffectInstance
{
    static constexpr const char* NAME = "scnEffectInstance";
    static constexpr const char* ALIAS = NAME;

    scn::EffectInstanceId effectInstanceId; // 00
    world::CompiledEffectInfo compiledEffect; // 08
};
RED4EXT_ASSERT_SIZE(EffectInstance, 0x70);
} // namespace scn
using scnEffectInstance = scn::EffectInstance;
} // namespace RED4ext

// clang-format on
