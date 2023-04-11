#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct StairsTrigger : game::Object
{
    static constexpr const char* NAME = "cpStairsTrigger";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StairsTrigger, 0x240);
} // namespace cp
using cpStairsTrigger = cp::StairsTrigger;
} // namespace RED4ext

// clang-format on
