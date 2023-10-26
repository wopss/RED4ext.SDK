#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_TranslateBone : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_TranslateBone";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 scale; // 50
    Vector4 biasValue; // 60
    anim::TransformIndex bone; // 70
    bool useIncrementalMode; // 88
    bool resetOnActivation; // 89
    uint8_t unk8A[0xA0 - 0x8A]; // 8A
    anim::PoseLink inputNode; // A0
    anim::VectorLink inputTranslation; // B8
    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(AnimNode_TranslateBone, 0xE0);
} // namespace anim
using animAnimNode_TranslateBone = anim::AnimNode_TranslateBone;
} // namespace RED4ext

// clang-format on
