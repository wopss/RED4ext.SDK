#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct RenderPlane_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questRenderPlane_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 38
    ERenderingPlane renderPlane; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(RenderPlane_NodeType, 0x78);
} // namespace quest
using questRenderPlane_NodeType = quest::RenderPlane_NodeType;
} // namespace RED4ext

// clang-format on
