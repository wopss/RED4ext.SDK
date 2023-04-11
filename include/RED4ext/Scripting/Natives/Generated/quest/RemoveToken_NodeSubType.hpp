#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IContentTokenManager_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct RemoveToken_NodeSubType : quest::IContentTokenManager_NodeSubType
{
    static constexpr const char* NAME = "questRemoveToken_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    bool removeAll; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(RemoveToken_NodeSubType, 0x38);
} // namespace quest
using questRemoveToken_NodeSubType = quest::RemoveToken_NodeSubType;
} // namespace RED4ext

// clang-format on
