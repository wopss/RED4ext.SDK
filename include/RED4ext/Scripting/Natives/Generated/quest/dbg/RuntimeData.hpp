#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct ISerializable;

namespace quest::dbg
{
struct RuntimeData
{
    static constexpr const char* NAME = "questdbgRuntimeData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint64_t version; // 08
    uint64_t questResourcePathHash; // 10
    uint64_t selectedBlockId; // 18
    DynArray<Handle<ISerializable>> objects; // 20
};
RED4EXT_ASSERT_SIZE(RuntimeData, 0x30);
} // namespace quest::dbg
using questdbgRuntimeData = quest::dbg::RuntimeData;
} // namespace RED4ext

// clang-format on
