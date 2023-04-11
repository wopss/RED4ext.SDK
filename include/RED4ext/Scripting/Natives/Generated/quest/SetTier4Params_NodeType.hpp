#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier4Params_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier4Params_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 38
    float adjustTime; // 40
    bool usePlayerWorkspot; // 44
    bool useEnterAnim; // 45
    bool useExitAnim; // 46
    uint8_t unk47[0x48 - 0x47]; // 47
};
RED4EXT_ASSERT_SIZE(SetTier4Params_NodeType, 0x48);
} // namespace quest
using questSetTier4Params_NodeType = quest::SetTier4Params_NodeType;
} // namespace RED4ext

// clang-format on
