#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gen/IRandomizationSupervisor.hpp>

namespace RED4ext
{
namespace gen
{
struct ScriptedRandomizationSupervisor : gen::IRandomizationSupervisor
{
    static constexpr const char* NAME = "genScriptedRandomizationSupervisor";
    static constexpr const char* ALIAS = "ScriptedRandomizationSupervisor";

};
RED4EXT_ASSERT_SIZE(ScriptedRandomizationSupervisor, 0x40);
} // namespace gen
using genScriptedRandomizationSupervisor = gen::ScriptedRandomizationSupervisor;
using ScriptedRandomizationSupervisor = gen::ScriptedRandomizationSupervisor;
} // namespace RED4ext

// clang-format on
