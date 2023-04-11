#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest { struct IContentTokenManager_NodeSubType; }

namespace quest
{
struct ContentTokenManager_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questContentTokenManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IContentTokenManager_NodeSubType> subtype; // 38
};
RED4EXT_ASSERT_SIZE(ContentTokenManager_NodeType, 0x48);
} // namespace quest
using questContentTokenManager_NodeType = quest::ContentTokenManager_NodeType;
} // namespace RED4ext

// clang-format on
