#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game { 
struct TargetingComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameTargetingComponent";
    static constexpr const char* ALIAS = "TargetingComponent";

    DynArray<TweakDBID> aimAssistData; // 120
    uint8_t unk130[0x158 - 0x130]; // 130
    bool isPrimary; // 158
    bool alwaysInTestRange; // 159
    bool isDirectional; // 15A
    uint8_t unk15B[0x160 - 0x15B]; // 15B
};
RED4EXT_ASSERT_SIZE(TargetingComponent, 0x160);
} // namespace game
using TargetingComponent = game::TargetingComponent;
} // namespace RED4ext
