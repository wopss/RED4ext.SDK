#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ContainerObjectBase.hpp>

namespace RED4ext
{
namespace game { 
struct ContainerObjectSingleItem : game::ContainerObjectBase
{
    static constexpr const char* NAME = "gameContainerObjectSingleItem";
    static constexpr const char* ALIAS = "ContainerObjectSingleItem";

    TweakDBID itemTDBID; // 2A8
};
RED4EXT_ASSERT_SIZE(ContainerObjectSingleItem, 0x2B0);
} // namespace game
using ContainerObjectSingleItem = game::ContainerObjectSingleItem;
} // namespace RED4ext
