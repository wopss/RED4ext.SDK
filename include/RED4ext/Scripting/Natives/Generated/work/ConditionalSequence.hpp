#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/LogicalOperation.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/Sequence.hpp>

namespace RED4ext
{
namespace work { struct IWorkspotCondition; }

namespace work
{
struct ConditionalSequence : work::Sequence
{
    static constexpr const char* NAME = "workConditionalSequence";
    static constexpr const char* ALIAS = NAME;

    work::LogicalOperation multipleConditionOperator; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    DynArray<Handle<work::IWorkspotCondition>> conditionList; // 68
};
RED4EXT_ASSERT_SIZE(ConditionalSequence, 0x78);
} // namespace work
using workConditionalSequence = work::ConditionalSequence;
} // namespace RED4ext

// clang-format on
