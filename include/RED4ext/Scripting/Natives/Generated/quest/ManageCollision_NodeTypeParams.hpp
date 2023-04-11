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
struct ManageCollision_NodeTypeParams
{
    static constexpr const char* NAME = "questManageCollision_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    bool enableCollision; // 08
    bool enableQueries; // 09
    uint8_t unk0A[0x10 - 0xA]; // A
    DynArray<CName> components; // 10
};
RED4EXT_ASSERT_SIZE(ManageCollision_NodeTypeParams, 0x20);
} // namespace quest
using questManageCollision_NodeTypeParams = quest::ManageCollision_NodeTypeParams;
} // namespace RED4ext

// clang-format on
