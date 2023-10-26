#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) IdleTransitionCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workIdleTransitionCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x90 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(IdleTransitionCommandData, 0x90);
} // namespace work
using workIdleTransitionCommandData = work::IdleTransitionCommandData;
} // namespace RED4ext

// clang-format on
