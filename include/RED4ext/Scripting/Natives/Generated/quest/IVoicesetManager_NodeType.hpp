#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IVoicesetManager_NodeType : quest::ObjectNodeType
{
    static constexpr const char* NAME = "questIVoicesetManager_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVoicesetManager_NodeType, 0x30);
} // namespace quest
using questIVoicesetManager_NodeType = quest::IVoicesetManager_NodeType;
} // namespace RED4ext

// clang-format on
