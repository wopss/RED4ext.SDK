#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/scn/IInterruptManager_Operation.hpp>

namespace RED4ext
{
namespace scn { struct IReturnCondition; }

namespace scn { 
struct OverrideReturnConditions_Operation : scn::IInterruptManager_Operation
{
    static constexpr const char* NAME = "scnOverrideReturnConditions_Operation";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::IReturnCondition>> returnConditions; // 30
};
RED4EXT_ASSERT_SIZE(OverrideReturnConditions_Operation, 0x40);
} // namespace scn
} // namespace RED4ext
