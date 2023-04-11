#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IObjectPoolSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectPoolSystem : game::IObjectPoolSystem
{
    static constexpr const char* NAME = "gameObjectPoolSystem";
    static constexpr const char* ALIAS = "ObjectPoolSystem";

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ObjectPoolSystem, 0xE0);
} // namespace game
using gameObjectPoolSystem = game::ObjectPoolSystem;
using ObjectPoolSystem = game::ObjectPoolSystem;
} // namespace RED4ext

// clang-format on
