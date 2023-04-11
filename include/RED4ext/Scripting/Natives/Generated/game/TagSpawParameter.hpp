#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectSpawnParameter.hpp>

namespace RED4ext
{
namespace game
{
struct TagSpawParameter : game::ObjectSpawnParameter
{
    static constexpr const char* NAME = "gameTagSpawParameter";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tags; // 30
};
RED4EXT_ASSERT_SIZE(TagSpawParameter, 0x40);
} // namespace game
using gameTagSpawParameter = game::TagSpawParameter;
} // namespace RED4ext

// clang-format on
