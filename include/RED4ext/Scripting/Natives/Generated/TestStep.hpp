#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct TestStep : IScriptable
{
    static constexpr const char* NAME = "TestStep";
    static constexpr const char* ALIAS = NAME;

    CName stepName; // 40
    uint16_t scriptId; // 48
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    CString reproStep; // 50
    DynArray<Variant> args; // 70
    uint8_t unk80[0xA8 - 0x80]; // 80
    float stepTimeout; // A8
    uint8_t unkAC[0xC0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(TestStep, 0xC0);
} // namespace RED4ext
