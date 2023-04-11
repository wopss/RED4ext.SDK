#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct ForceModule_NodeTypeParams
{
    static constexpr const char* NAME = "questForceModule_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    CString module; // 08
    DynArray<CName> components; // 28
};
RED4EXT_ASSERT_SIZE(ForceModule_NodeTypeParams, 0x38);
} // namespace quest
using questForceModule_NodeTypeParams = quest::ForceModule_NodeTypeParams;
} // namespace RED4ext

// clang-format on
