#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct DummyAlwaysTrueReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnDummyAlwaysTrueReturnCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DummyAlwaysTrueReturnCondition, 0x30);
} // namespace scn
} // namespace RED4ext
