#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct TestCaseBase_Backend : IScriptable
{
    static constexpr const char* NAME = "TestCaseBase_Backend";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x130 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TestCaseBase_Backend, 0x130);
} // namespace RED4ext
