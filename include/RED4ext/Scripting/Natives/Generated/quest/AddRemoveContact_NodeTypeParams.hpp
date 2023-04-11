#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct AddRemoveContact_NodeTypeParams
{
    static constexpr const char* NAME = "questAddRemoveContact_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    CName contact; // 00
    bool addContact; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(AddRemoveContact_NodeTypeParams, 0x10);
} // namespace quest
using questAddRemoveContact_NodeTypeParams = quest::AddRemoveContact_NodeTypeParams;
} // namespace RED4ext

// clang-format on
