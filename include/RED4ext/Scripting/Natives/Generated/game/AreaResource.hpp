#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CookedAreaData.hpp>

namespace RED4ext
{
namespace game
{
struct AreaResource : CResource
{
    static constexpr const char* NAME = "gameAreaResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CookedAreaData> cookedData; // 40
};
RED4EXT_ASSERT_SIZE(AreaResource, 0x50);
} // namespace game
using gameAreaResource = game::AreaResource;
} // namespace RED4ext

// clang-format on
