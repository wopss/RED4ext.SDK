#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace cp
{
struct TestComponent : game::Component
{
    static constexpr const char* NAME = "cpTestComponent";
    static constexpr const char* ALIAS = NAME;

    float whatever; // A8
    float whateverIE; // AC
};
RED4EXT_ASSERT_SIZE(TestComponent, 0xB0);
} // namespace cp
using cpTestComponent = cp::TestComponent;
} // namespace RED4ext

// clang-format on
