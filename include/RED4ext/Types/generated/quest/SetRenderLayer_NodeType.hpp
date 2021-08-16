#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/RenderSceneLayer.hpp>
#include <RED4ext/Types/generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetRenderLayer_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questSetRenderLayer_NodeType";
    static constexpr const char* ALIAS = NAME;

    RenderSceneLayer renderSceneLayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(SetRenderLayer_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
