#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MarketingAnimationEntry.hpp>

namespace RED4ext
{
namespace anim { struct LookAtPreset_FullControl; }

namespace ent { 
struct MarketingAnimationComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entMarketingAnimationComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::MarketingAnimationEntry> animations; // 120
    bool freezeAnimations; // 130
    bool enableLookAt; // 131
    uint8_t unk132[0x138 - 0x132]; // 132
    Handle<anim::LookAtPreset_FullControl> lookAtSettings; // 138
    float lookAtOrbitDistance; // 148
    float lookAtTargetPitch; // 14C
    float lookAtTargetYaw; // 150
    uint8_t unk154[0x170 - 0x154]; // 154
};
RED4EXT_ASSERT_SIZE(MarketingAnimationComponent, 0x170);
} // namespace ent
} // namespace RED4ext
