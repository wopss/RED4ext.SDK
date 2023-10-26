#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) ChaseSpawnComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameChaseSpawnComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x1050 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ChaseSpawnComponent, 0x1050);
} // namespace game
using gameChaseSpawnComponent = game::ChaseSpawnComponent;
} // namespace RED4ext

// clang-format on
