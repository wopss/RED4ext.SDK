#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace work
{
struct WorkEntryId
{
    static constexpr const char* NAME = "workWorkEntryId";
    static constexpr const char* ALIAS = "WorkEntryId";

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(WorkEntryId, 0x4);
} // namespace work
using workWorkEntryId = work::WorkEntryId;
using WorkEntryId = work::WorkEntryId;
} // namespace RED4ext

// clang-format on
