#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PrepareBlendCamera_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questPrepareBlendCamera_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PrepareBlendCamera_NodeType, 0x38);
} // namespace quest
using questPrepareBlendCamera_NodeType = quest::PrepareBlendCamera_NodeType;
} // namespace RED4ext

// clang-format on
