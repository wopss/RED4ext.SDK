#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn::sim
{
struct IActionScenario : ISerializable
{
    static constexpr const char* NAME = "scnsimIActionScenario";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IActionScenario, 0x30);
} // namespace scn::sim
using scnsimIActionScenario = scn::sim::IActionScenario;
} // namespace RED4ext

// clang-format on
