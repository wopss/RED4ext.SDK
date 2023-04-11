#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct CoverTypeCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workCoverTypeCondition";
    static constexpr const char* ALIAS = NAME;

    bool isHighCover; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CoverTypeCondition, 0x40);
} // namespace work
using workCoverTypeCondition = work::CoverTypeCondition;
} // namespace RED4ext

// clang-format on
