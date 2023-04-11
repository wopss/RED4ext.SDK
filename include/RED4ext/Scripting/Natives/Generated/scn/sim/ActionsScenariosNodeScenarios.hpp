#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn::sim { struct IActionScenario; }

namespace scn::sim
{
struct ActionsScenariosNodeScenarios
{
    static constexpr const char* NAME = "scnsimActionsScenariosNodeScenarios";
    static constexpr const char* ALIAS = NAME;

    scn::NodeId nodeId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<Handle<scn::sim::IActionScenario>> scenarios; // 08
    Handle<scn::sim::IActionScenario> fallback; // 18
};
RED4EXT_ASSERT_SIZE(ActionsScenariosNodeScenarios, 0x28);
} // namespace scn::sim
using scnsimActionsScenariosNodeScenarios = scn::sim::ActionsScenariosNodeScenarios;
} // namespace RED4ext

// clang-format on
