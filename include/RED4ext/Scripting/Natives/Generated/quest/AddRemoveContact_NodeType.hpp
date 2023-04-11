#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ChangeContactList_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AddRemoveContact_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questAddRemoveContact_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ChangeContactList_NodeTypeParams> params; // 38
};
RED4EXT_ASSERT_SIZE(AddRemoveContact_NodeType, 0x48);
} // namespace quest
using questAddRemoveContact_NodeType = quest::AddRemoveContact_NodeType;
} // namespace RED4ext

// clang-format on
