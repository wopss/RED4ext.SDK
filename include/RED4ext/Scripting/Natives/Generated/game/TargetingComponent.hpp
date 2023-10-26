#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) TargetingComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameTargetingComponent";
    static constexpr const char* ALIAS = "TargetingComponent";

    DynArray<TweakDBID> aimAssistData; // 120
    uint8_t unk130[0x1B0 - 0x130]; // 130
    bool isPrimary; // 1B0
    bool alwaysInTestRange; // 1B1
    bool isDirectional; // 1B2
    uint8_t unk1B3[0x1C0 - 0x1B3]; // 1B3
};
RED4EXT_ASSERT_SIZE(TargetingComponent, 0x1C0);
} // namespace game
using gameTargetingComponent = game::TargetingComponent;
using TargetingComponent = game::TargetingComponent;
} // namespace RED4ext

// clang-format on
