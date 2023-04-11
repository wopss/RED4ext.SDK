#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace red
{
struct StageMessage
{
    static constexpr const char* NAME = "redStageMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t parent; // 00
    bool reset; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    DynArray<uint32_t> ids; // 08
    DynArray<CString> names; // 18
};
RED4EXT_ASSERT_SIZE(StageMessage, 0x28);
} // namespace red
using redStageMessage = red::StageMessage;
} // namespace RED4ext

// clang-format on
