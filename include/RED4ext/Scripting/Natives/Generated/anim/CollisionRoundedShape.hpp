#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) CollisionRoundedShape
{
    static constexpr const char* NAME = "animCollisionRoundedShape";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 00
    uint8_t unk18[0x20 - 0x18]; // 18
    QsTransform transformLS; // 20
    float roundedCornerRadius; // 50
    float xBoxExtent; // 54
    float yBoxExtent; // 58
    float zBoxExtent; // 5C
    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CollisionRoundedShape, 0x90);
} // namespace anim
using animCollisionRoundedShape = anim::CollisionRoundedShape;
} // namespace RED4ext

// clang-format on
