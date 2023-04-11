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
struct ExcludedGesturesData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workExcludedGesturesData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(ExcludedGesturesData, 0x18);
} // namespace work
using workExcludedGesturesData = work::ExcludedGesturesData;
} // namespace RED4ext

// clang-format on
