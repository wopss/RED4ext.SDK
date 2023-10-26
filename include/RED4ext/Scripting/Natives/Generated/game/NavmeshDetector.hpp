#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) NavmeshDetector : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameNavmeshDetector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x160 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(NavmeshDetector, 0x160);
} // namespace game
using gameNavmeshDetector = game::NavmeshDetector;
} // namespace RED4ext

// clang-format on
