#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ContainerObjectBase.hpp>

namespace RED4ext
{
namespace game { 
struct ContainerObjectAnimated : game::ContainerObjectBase
{
    static constexpr const char* NAME = "gameContainerObjectAnimated";
    static constexpr const char* ALIAS = NAME;

    CName animFeatureName; // 298
};
RED4EXT_ASSERT_SIZE(ContainerObjectAnimated, 0x2A0);
} // namespace game
} // namespace RED4ext
