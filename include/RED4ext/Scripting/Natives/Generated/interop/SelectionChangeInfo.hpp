#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace interop
{
struct SelectionChangeInfo
{
    static constexpr const char* NAME = "interopSelectionChangeInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint64_t> selected; // 00
    DynArray<uint64_t> deselected; // 10
};
RED4EXT_ASSERT_SIZE(SelectionChangeInfo, 0x20);
} // namespace interop
using interopSelectionChangeInfo = interop::SelectionChangeInfo;
} // namespace RED4ext

// clang-format on
