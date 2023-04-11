#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/sim/ActionsScenariosNodeScenarios.hpp>

namespace RED4ext
{
namespace scn::sim
{
struct ActionsScenarios
{
    static constexpr const char* NAME = "scnsimActionsScenarios";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::sim::ActionsScenariosNodeScenarios> allScenarios; // 00
};
RED4EXT_ASSERT_SIZE(ActionsScenarios, 0x10);
} // namespace scn::sim
using scnsimActionsScenarios = scn::sim::ActionsScenarios;
} // namespace RED4ext

// clang-format on
