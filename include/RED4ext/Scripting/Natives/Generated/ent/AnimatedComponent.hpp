#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTrackParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinableComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim { struct AnimGraph; }
namespace anim { struct FacialSetup; }
namespace anim { struct Rig; }
namespace ent { struct AnimationControlBinding; }

namespace ent { 
struct AnimatedComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entAnimatedComponent";
    static constexpr const char* ALIAS = "AnimatedComponent";

    CName audioAltName; // 130
    Ref<anim::Rig> rig; // 138
    Ref<anim::AnimGraph> graph; // 150
    uint8_t unk168[0x180 - 0x168]; // 168
    red::TagList animTags; // 180
    anim::AnimSetup animations; // 190
    uint8_t unk1B0[0x1E8 - 0x1B0]; // 1B0
    RaRef<anim::FacialSetup> facialSetup; // 1E8
    uint8_t unk1F0[0x250 - 0x1F0]; // 1F0
    int32_t serverForcedLod; // 250
    int32_t clientForcedLod; // 254
    bool serverForcedVisibility; // 258
    bool clientForcedVisibility; // 259
    bool useLongRangeVisibility; // 25A
    bool calculateAccelerationWs; // 25B
    uint8_t unk25C[0x268 - 0x25C]; // 25C
    DynArray<ent::AnimTrackParameter> animParameters; // 268
    Handle<ent::AnimationControlBinding> controlBinding; // 278
    uint8_t unk288[0x2A0 - 0x288]; // 288
};
RED4EXT_ASSERT_SIZE(AnimatedComponent, 0x2A0);
} // namespace ent
using AnimatedComponent = ent::AnimatedComponent;
} // namespace RED4ext
