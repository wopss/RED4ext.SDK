#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/INodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IRenderFxManagerNodeType : quest::INodeType
{
    static constexpr const char* NAME = "questIRenderFxManagerNodeType";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(IRenderFxManagerNodeType, 0x38);
} // namespace quest
using questIRenderFxManagerNodeType = quest::IRenderFxManagerNodeType;
} // namespace RED4ext

// clang-format on
