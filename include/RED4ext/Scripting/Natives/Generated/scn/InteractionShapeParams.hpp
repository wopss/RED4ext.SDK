#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsSizePreset.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) InteractionShapeParams : ISerializable
{
    static constexpr const char* NAME = "scnInteractionShapeParams";
    static constexpr const char* ALIAS = NAME;

    scn::ChoiceNodeNsSizePreset preset; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    Vector3 offset; // 34
    Quaternion rotation; // 40
    float customIndicationRange; // 50
    float customActivationRange; // 54
    float activationYawLimit; // 58
    float activationBaseLength; // 5C
    float activationHeight; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(InteractionShapeParams, 0x70);
} // namespace scn
using scnInteractionShapeParams = scn::InteractionShapeParams;
} // namespace RED4ext

// clang-format on
