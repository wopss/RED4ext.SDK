#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gen/IRandomizationSupervisor.hpp>

namespace RED4ext
{
namespace gen { 
struct NullRandomizationSupervisor : gen::IRandomizationSupervisor
{
    static constexpr const char* NAME = "genNullRandomizationSupervisor";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NullRandomizationSupervisor, 0x40);
} // namespace gen
} // namespace RED4ext
