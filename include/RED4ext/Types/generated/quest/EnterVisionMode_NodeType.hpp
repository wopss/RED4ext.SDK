#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/game/VisionModeType.hpp>
#include <RED4ext/Types/generated/quest/IVisionModeNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct EnterVisionMode_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questEnterVisionMode_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    game::VisionModeType visionModeType; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EnterVisionMode_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
