#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature; }

namespace ent { 
struct AnimInputSetterAnimFeature : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterAnimFeature";
    static constexpr const char* ALIAS = NAME;

    float delay; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Handle<anim::AnimFeature> value; // 50
};
RED4EXT_ASSERT_SIZE(AnimInputSetterAnimFeature, 0x60);
} // namespace ent
} // namespace RED4ext
