#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct MenuScenario : IScriptable
{
    static constexpr const char* NAME = "inkMenuScenario";
    static constexpr const char* ALIAS = "inkMenuScenario";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuScenario, 0x60);
} // namespace ink
} // namespace RED4ext
