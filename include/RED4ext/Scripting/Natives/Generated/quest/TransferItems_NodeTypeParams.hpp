#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TransferItems_NodeTypeParams_OperationData.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TransferItems_NodeTypeParams_TagOperationData.hpp>

namespace RED4ext
{
namespace quest { struct TransferItems_NodeTypeParams_TransferAllOperationData; }
namespace quest { struct UniversalRef; }

namespace quest
{
struct TransferItems_NodeTypeParams
{
    static constexpr const char* NAME = "questTransferItems_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> giver; // 00
    Handle<quest::UniversalRef> receiver; // 10
    Handle<quest::TransferItems_NodeTypeParams_TransferAllOperationData> transferAllOperation; // 20
    DynArray<quest::TransferItems_NodeTypeParams_OperationData> itemOperations; // 30
    DynArray<quest::TransferItems_NodeTypeParams_TagOperationData> tagOperations; // 40
};
RED4EXT_ASSERT_SIZE(TransferItems_NodeTypeParams, 0x50);
} // namespace quest
using questTransferItems_NodeTypeParams = quest::TransferItems_NodeTypeParams;
} // namespace RED4ext

// clang-format on
