#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeExtendableNodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeDebugLogDefinition : AI::CTreeExtendableNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDebugLogDefinition";
    static constexpr const char* ALIAS = NAME;

    CString text; // 48
    float timeOnScreen; // 68
    bool useVisualDebug; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(CTreeNodeDebugLogDefinition, 0x70);
} // namespace AI
using AICTreeNodeDebugLogDefinition = AI::CTreeNodeDebugLogDefinition;
} // namespace RED4ext

// clang-format on
