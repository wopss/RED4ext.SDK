#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/GenericAnimDatabase_AnimationData.hpp>

namespace RED4ext
{
namespace anim
{
struct GenericAnimDatabase_DatabaseRow
{
    static constexpr const char* NAME = "animGenericAnimDatabase_DatabaseRow";
    static constexpr const char* ALIAS = NAME;

    DynArray<int32_t> inputValues; // 00
    anim::GenericAnimDatabase_AnimationData animationData; // 10
};
RED4EXT_ASSERT_SIZE(GenericAnimDatabase_DatabaseRow, 0x28);
} // namespace anim
using animGenericAnimDatabase_DatabaseRow = anim::GenericAnimDatabase_DatabaseRow;
} // namespace RED4ext

// clang-format on
