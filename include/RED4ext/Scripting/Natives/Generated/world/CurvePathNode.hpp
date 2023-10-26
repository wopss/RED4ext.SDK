#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CurvePathBakerUserInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }
namespace anim { struct Rig; }

namespace world
{
struct __declspec(align(0x10)) CurvePathNode : world::SplineNode
{
    static constexpr const char* NAME = "worldCurvePathNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0xA8 - 0x70]; // 70
    anim::CurvePathBakerUserInput userInput; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
    Vector4 defaultForwardVector; // C0
    float globalInBlendTime; // D0
    float globalOutBlendTime; // D4
    CName defaultPoseAnimationName; // D8
    float defaultPoseSampleTime; // E0
    float initialDiffYaw; // E4
    bool turnCharacterToMatchVelocity; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
    Ref<anim::Rig> rig; // F0
    DynArray<Ref<anim::AnimSet>> animSets; // 108
    float timeDeltaMultiplier; // 118
    uint8_t unk11C[0x2C0 - 0x11C]; // 11C
};
RED4EXT_ASSERT_SIZE(CurvePathNode, 0x2C0);
} // namespace world
using worldCurvePathNode = world::CurvePathNode;
} // namespace RED4ext

// clang-format on
