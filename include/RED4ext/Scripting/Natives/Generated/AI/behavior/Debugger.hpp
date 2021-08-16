#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/IDebugger.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct Debugger : AI::behavior::IDebugger
{
    static constexpr const char* NAME = "AIbehaviorDebugger";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Debugger, 0x30);
} // namespace AI::behavior
} // namespace RED4ext
