#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace ex
{
struct EntitySpawner : game::IGameSystem
{
    static constexpr const char* NAME = "exEntitySpawner";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EntitySpawner, 0x48);
} // namespace ex
using exEntitySpawner = ex::EntitySpawner;
} // namespace RED4ext

// clang-format on
