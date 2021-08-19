#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>

namespace RED4ext
{
namespace ink { 
struct TextOffsetAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextOffsetAnimationController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x164 - 0xE0]; // E0
    float timeToSkip; // 164
};
RED4EXT_ASSERT_SIZE(TextOffsetAnimationController, 0x168);
} // namespace ink
} // namespace RED4ext
