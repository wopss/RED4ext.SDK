#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct HumanoidBody : ent::IComponent
{
    static constexpr const char* NAME = "gameHumanoidBody";
    static constexpr const char* ALIAS = NAME;

    CName stanceAnimFeatureName; // 90
    CName aimAnimFeatureName; // 98
    float basePersonalSpace; // A0
    float baseHeight; // A4
    float baseEyesHeightRatio; // A8
    uint8_t unkAC[0xE0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(HumanoidBody, 0xE0);
} // namespace game
using gameHumanoidBody = game::HumanoidBody;
} // namespace RED4ext

// clang-format on
