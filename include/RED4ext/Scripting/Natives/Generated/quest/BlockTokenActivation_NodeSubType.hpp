#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BlockAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IContentTokenManager_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct BlockTokenActivation_NodeSubType : quest::IContentTokenManager_NodeSubType
{
    static constexpr const char* NAME = "questBlockTokenActivation_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    quest::BlockAction action; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    CName source; // 38
    bool resetTokenSpawnTimer; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(BlockTokenActivation_NodeSubType, 0x48);
} // namespace quest
using questBlockTokenActivation_NodeSubType = quest::BlockTokenActivation_NodeSubType;
} // namespace RED4ext

// clang-format on
