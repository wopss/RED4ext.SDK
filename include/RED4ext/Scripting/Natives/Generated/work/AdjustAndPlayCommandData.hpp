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
struct __declspec(align(0x10)) AdjustAndPlayCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workAdjustAndPlayCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x60 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AdjustAndPlayCommandData, 0x60);
} // namespace work
using workAdjustAndPlayCommandData = work::AdjustAndPlayCommandData;
} // namespace RED4ext

// clang-format on
