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
struct SpawnToken_NodeSubType : quest::IContentTokenManager_NodeSubType
{
    static constexpr const char* NAME = "questSpawnToken_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    bool immediate; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(SpawnToken_NodeSubType, 0x38);
} // namespace quest
using questSpawnToken_NodeSubType = quest::SpawnToken_NodeSubType;
} // namespace RED4ext

// clang-format on
