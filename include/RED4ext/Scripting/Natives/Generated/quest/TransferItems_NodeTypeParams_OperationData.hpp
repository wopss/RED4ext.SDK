#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest { 
struct TransferItems_NodeTypeParams_OperationData
{
    static constexpr const char* NAME = "questTransferItems_NodeTypeParams_OperationData";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemTDBID; // 00
    int32_t quantity; // 08
};
RED4EXT_ASSERT_SIZE(TransferItems_NodeTypeParams_OperationData, 0xC);
} // namespace quest
} // namespace RED4ext
