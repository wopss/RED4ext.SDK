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
struct TransferItems_NodeTypeParams_TagOperationData
{
    static constexpr const char* NAME = "questTransferItems_NodeTypeParams_TagOperationData";
    static constexpr const char* ALIAS = NAME;

    CName tagToTransfer; // 00
    DynArray<TweakDBID> itemIDsToIgnore; // 08
    DynArray<CName> tagsToIgnore; // 18
};
RED4EXT_ASSERT_SIZE(TransferItems_NodeTypeParams_TagOperationData, 0x28);
} // namespace quest
using questTransferItems_NodeTypeParams_TagOperationData = quest::TransferItems_NodeTypeParams_TagOperationData;
} // namespace RED4ext

// clang-format on
