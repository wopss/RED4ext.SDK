#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFXManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PlayFX_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayFX_NodeType : quest::IFXManagerNodeType
{
    static constexpr const char* NAME = "questPlayFX_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PlayFX_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(PlayFX_NodeType, 0x40);
} // namespace quest
using questPlayFX_NodeType = quest::PlayFX_NodeType;
} // namespace RED4ext

// clang-format on
