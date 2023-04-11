#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>

namespace RED4ext
{
namespace work
{
struct IEntry : ISerializable
{
    static constexpr const char* NAME = "workIEntry";
    static constexpr const char* ALIAS = NAME;

    work::WorkEntryId id; // 30
    uint32_t flags; // 34
};
RED4EXT_ASSERT_SIZE(IEntry, 0x38);
} // namespace work
using workIEntry = work::IEntry;
} // namespace RED4ext

// clang-format on
