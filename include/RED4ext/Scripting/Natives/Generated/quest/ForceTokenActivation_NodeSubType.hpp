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
struct ForceTokenActivation_NodeSubType : quest::IContentTokenManager_NodeSubType
{
    static constexpr const char* NAME = "questForceTokenActivation_NodeSubType";
    static constexpr const char* ALIAS = NAME;

    bool forceCreatingToken; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ForceTokenActivation_NodeSubType, 0x38);
} // namespace quest
using questForceTokenActivation_NodeSubType = quest::ForceTokenActivation_NodeSubType;
} // namespace RED4ext

// clang-format on
