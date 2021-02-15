#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work { 
struct ExcludedGesturesData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workExcludedGesturesData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(ExcludedGesturesData, 0x18);
} // namespace work
} // namespace RED4ext
