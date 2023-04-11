#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVoicesetManager_NodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PlayVoiceset_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayVoiceset_NodeType : quest::IVoicesetManager_NodeType
{
    static constexpr const char* NAME = "questPlayVoiceset_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PlayVoiceset_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(PlayVoiceset_NodeType, 0x40);
} // namespace quest
using questPlayVoiceset_NodeType = quest::PlayVoiceset_NodeType;
} // namespace RED4ext

// clang-format on
