#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace interop { 
struct GlobalNodeIDResult
{
    static constexpr const char* NAME = "interopGlobalNodeIDResult";
    static constexpr const char* ALIAS = NAME;

    CString errorMessage; // 00
    CString result; // 20
    bool isValid; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(GlobalNodeIDResult, 0x48);
} // namespace interop
} // namespace RED4ext
