#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ContainerObjectBase.hpp>

namespace RED4ext
{
namespace game
{
struct ContainerObjectAnimated : game::ContainerObjectBase
{
    static constexpr const char* NAME = "gameContainerObjectAnimated";
    static constexpr const char* ALIAS = NAME;

    CName animFeatureName; // 2B0
};
RED4EXT_ASSERT_SIZE(ContainerObjectAnimated, 0x2B8);
} // namespace game
using gameContainerObjectAnimated = game::ContainerObjectAnimated;
} // namespace RED4ext

// clang-format on
