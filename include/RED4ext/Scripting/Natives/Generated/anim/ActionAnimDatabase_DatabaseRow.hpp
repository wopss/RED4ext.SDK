#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ActionAnimDatabase_AnimationData.hpp>

namespace RED4ext
{
namespace anim { 
struct ActionAnimDatabase_DatabaseRow
{
    static constexpr const char* NAME = "animActionAnimDatabase_DatabaseRow";
    static constexpr const char* ALIAS = NAME;

    CName animFeatureName; // 00
    int32_t state; // 08
    int32_t animVariation; // 0C
    anim::ActionAnimDatabase_AnimationData animationData; // 10
};
RED4EXT_ASSERT_SIZE(ActionAnimDatabase_DatabaseRow, 0x38);
} // namespace anim
} // namespace RED4ext
