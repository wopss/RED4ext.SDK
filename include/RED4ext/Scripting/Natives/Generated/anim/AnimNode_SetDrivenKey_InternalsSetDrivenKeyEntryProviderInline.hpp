#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SetDrivenKey_InternalsEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SetDrivenKey_InternalsISetDrivenKeyEntryProvider.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetDrivenKey_InternalsSetDrivenKeyEntryProviderInline : anim::AnimNode_SetDrivenKey_InternalsISetDrivenKeyEntryProvider
{
    static constexpr const char* NAME = "animAnimNode_SetDrivenKey_InternalsSetDrivenKeyEntryProviderInline";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimNode_SetDrivenKey_InternalsEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(AnimNode_SetDrivenKey_InternalsSetDrivenKeyEntryProviderInline, 0x40);
} // namespace anim
using animAnimNode_SetDrivenKey_InternalsSetDrivenKeyEntryProviderInline = anim::AnimNode_SetDrivenKey_InternalsSetDrivenKeyEntryProviderInline;
} // namespace RED4ext

// clang-format on
