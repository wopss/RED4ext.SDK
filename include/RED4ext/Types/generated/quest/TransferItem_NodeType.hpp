#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/IItemManagerNodeType.hpp>
#include <RED4ext/Types/generated/quest/TransferItems_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct TransferItem_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questTransferItem_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::TransferItems_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(TransferItem_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
