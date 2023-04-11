#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptManager_Operation.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptCondition; }

namespace scn
{
struct OverrideInterruptConditions_Operation : scn::IInterruptManager_Operation
{
    static constexpr const char* NAME = "scnOverrideInterruptConditions_Operation";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 30
};
RED4EXT_ASSERT_SIZE(OverrideInterruptConditions_Operation, 0x40);
} // namespace scn
using scnOverrideInterruptConditions_Operation = scn::OverrideInterruptConditions_Operation;
} // namespace RED4ext

// clang-format on
