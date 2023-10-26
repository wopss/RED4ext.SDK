#pragma once

// clang-format off

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

namespace ent
{
struct __declspec(align(0x10)) AnimatedComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entAnimatedComponent";
    static constexpr const char* ALIAS = "AnimatedComponent";

    CName audioAltName; // 130
    Ref<anim::Rig> rig; // 138
    Ref<anim::AnimGraph> graph; // 150
    uint8_t unk168[0x180 - 0x168]; // 168
    red::TagList animTags; // 180
    anim::AnimSetup animations; // 190
    uint8_t unk1B8[0x1F8 - 0x1B8]; // 1B8
    RaRef<anim::FacialSetup> facialSetup; // 1F8
    uint8_t unk200[0x260 - 0x200]; // 200
    int32_t serverForcedLod; // 260
    int32_t clientForcedLod; // 264
    bool serverForcedVisibility; // 268
    bool clientForcedVisibility; // 269
    bool useLongRangeVisibility; // 26A
    bool calculateAccelerationWs; // 26B
    uint8_t unk26C[0x278 - 0x26C]; // 26C
    DynArray<ent::AnimTrackParameter> animParameters; // 278
    Handle<ent::AnimationControlBinding> controlBinding; // 288
    uint8_t unk298[0x2B0 - 0x298]; // 298
};
RED4EXT_ASSERT_SIZE(AnimatedComponent, 0x2B0);
} // namespace ent
using entAnimatedComponent = ent::AnimatedComponent;
using AnimatedComponent = ent::AnimatedComponent;
} // namespace RED4ext

// clang-format on
