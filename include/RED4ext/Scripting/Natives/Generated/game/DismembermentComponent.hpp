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
struct DismembermentComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameDismembermentComponent";
    static constexpr const char* ALIAS = "DismembermentComponent";

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(DismembermentComponent, 0xB0);
} // namespace game
using gameDismembermentComponent = game::DismembermentComponent;
using DismembermentComponent = game::DismembermentComponent;
} // namespace RED4ext

// clang-format on
