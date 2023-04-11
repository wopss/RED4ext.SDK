#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ManageCollision_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct ManageCollision_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questManageCollision_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ManageCollision_NodeTypeParams> params; // 38
};
RED4EXT_ASSERT_SIZE(ManageCollision_NodeType, 0x48);
} // namespace quest
using questManageCollision_NodeType = quest::ManageCollision_NodeType;
} // namespace RED4ext

// clang-format on
