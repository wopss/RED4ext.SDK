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
struct EthnicityComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameEthnicityComponent";
    static constexpr const char* ALIAS = "EthnicityComponent";

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(EthnicityComponent, 0xB0);
} // namespace game
using gameEthnicityComponent = game::EthnicityComponent;
using EthnicityComponent = game::EthnicityComponent;
} // namespace RED4ext

// clang-format on
