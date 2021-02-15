#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/IVoicesetManager_NodeType.hpp>
#include <RED4ext/Types/generated/quest/PlayVoiceset_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayVoiceset_NodeType : quest::IVoicesetManager_NodeType
{
    static constexpr const char* NAME = "questPlayVoiceset_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PlayVoiceset_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(PlayVoiceset_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
