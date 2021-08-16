#pragma once

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

namespace work { 
struct ConditionalSequence : work::Sequence
{
    static constexpr const char* NAME = "workConditionalSequence";
    static constexpr const char* ALIAS = NAME;

    work::LogicalOperation multipleConditionOperator; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    DynArray<Handle<work::IWorkspotCondition>> conditionList; // 60
};
RED4EXT_ASSERT_SIZE(ConditionalSequence, 0x70);
} // namespace work
} // namespace RED4ext
