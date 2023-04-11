#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct TransferItems_NodeTypeParams_TransferAllOperationData : ISerializable
{
    static constexpr const char* NAME = "questTransferItems_NodeTypeParams_TransferAllOperationData";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> itemIDsToIgnore; // 30
    DynArray<CName> tagsToIgnore; // 40
};
RED4EXT_ASSERT_SIZE(TransferItems_NodeTypeParams_TransferAllOperationData, 0x50);
} // namespace quest
using questTransferItems_NodeTypeParams_TransferAllOperationData = quest::TransferItems_NodeTypeParams_TransferAllOperationData;
} // namespace RED4ext

// clang-format on
