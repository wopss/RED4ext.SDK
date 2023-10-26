#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/MappinData.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct __declspec(align(0x10)) MappinComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gamemappinsMappinComponent";
    static constexpr const char* ALIAS = "MappinComponent";

    uint8_t unk120[0x128 - 0x120]; // 120
    game::mappins::MappinData data; // 128
    uint8_t unk1A0[0x1B0 - 0x1A0]; // 1A0
};
RED4EXT_ASSERT_SIZE(MappinComponent, 0x1B0);
} // namespace game::mappins
using gamemappinsMappinComponent = game::mappins::MappinComponent;
using MappinComponent = game::mappins::MappinComponent;
} // namespace RED4ext

// clang-format on
