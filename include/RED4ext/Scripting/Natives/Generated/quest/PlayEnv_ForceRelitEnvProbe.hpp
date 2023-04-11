#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEnvironmentManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayEnv_ForceRelitEnvProbe : quest::IEnvironmentManagerNodeType
{
    static constexpr const char* NAME = "questPlayEnv_ForceRelitEnvProbe";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlayEnv_ForceRelitEnvProbe, 0x30);
} // namespace quest
using questPlayEnv_ForceRelitEnvProbe = quest::PlayEnv_ForceRelitEnvProbe;
} // namespace RED4ext

// clang-format on
