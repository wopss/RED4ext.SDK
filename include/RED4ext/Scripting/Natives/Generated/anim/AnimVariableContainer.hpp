#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct AnimVariableBool; }
namespace anim { struct AnimVariableFloat; }
namespace anim { struct AnimVariableInt; }
namespace anim { struct AnimVariableQuaternion; }
namespace anim { struct AnimVariableTransform; }
namespace anim { struct AnimVariableVector; }

namespace anim
{
struct AnimVariableContainer : ISerializable
{
    static constexpr const char* NAME = "animAnimVariableContainer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<anim::AnimVariableBool>> boolVariables; // 38
    DynArray<Handle<anim::AnimVariableInt>> intVariables; // 48
    DynArray<Handle<anim::AnimVariableFloat>> floatVariables; // 58
    DynArray<Handle<anim::AnimVariableVector>> vectorVariables; // 68
    DynArray<Handle<anim::AnimVariableQuaternion>> quaternionVariables; // 78
    DynArray<Handle<anim::AnimVariableTransform>> transformVariables; // 88
    uint8_t unk98[0x248 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(AnimVariableContainer, 0x248);
} // namespace anim
using animAnimVariableContainer = anim::AnimVariableContainer;
} // namespace RED4ext

// clang-format on
