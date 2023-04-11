#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ChangeVoicesetState_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVoicesetManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ChangeVoicesetState_NodeType : quest::IVoicesetManager_NodeType
{
    static constexpr const char* NAME = "questChangeVoicesetState_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ChangeVoicesetState_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(ChangeVoicesetState_NodeType, 0x40);
} // namespace quest
using questChangeVoicesetState_NodeType = quest::ChangeVoicesetState_NodeType;
} // namespace RED4ext

// clang-format on
