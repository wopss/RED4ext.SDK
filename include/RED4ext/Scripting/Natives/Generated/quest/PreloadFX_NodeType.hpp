#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFXManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PreloadFX_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct PreloadFX_NodeType : quest::IFXManagerNodeType
{
    static constexpr const char* NAME = "questPreloadFX_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PreloadFX_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(PreloadFX_NodeType, 0x40);
} // namespace quest
using questPreloadFX_NodeType = quest::PreloadFX_NodeType;
} // namespace RED4ext

// clang-format on
