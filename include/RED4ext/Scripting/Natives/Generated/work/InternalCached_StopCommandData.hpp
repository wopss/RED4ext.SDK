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
struct InternalCached_StopCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workInternalCached_StopCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x38 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(InternalCached_StopCommandData, 0x38);
} // namespace work
using workInternalCached_StopCommandData = work::InternalCached_StopCommandData;
} // namespace RED4ext

// clang-format on
