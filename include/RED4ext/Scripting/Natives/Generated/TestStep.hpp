#pragma once

// clang-format off

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
    uint8_t unk48[0x4A - 0x48]; // 48
    uint16_t scriptId; // 4A
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    CString reproStep; // 50
    DynArray<Variant> args; // 70
    uint8_t unk80[0xA8 - 0x80]; // 80
    float stepTimeout; // A8
    bool stopTestOnFailure; // AC
    uint8_t unkAD[0x100 - 0xAD]; // AD
};
RED4EXT_ASSERT_SIZE(TestStep, 0x100);
} // namespace RED4ext

// clang-format on
