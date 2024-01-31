#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFXManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PlayRazerAnimation_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SetIdleRazerAnimation_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/StopRazerAnimation_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct RazerAnimation_NodeType : quest::IFXManagerNodeType
{
    static constexpr const char* NAME = "questRazerAnimation_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PlayRazerAnimation_NodeTypeParams> playParams; // 30
    DynArray<quest::StopRazerAnimation_NodeTypeParams> stopParams; // 40
    DynArray<quest::SetIdleRazerAnimation_NodeTypeParams> idleParams; // 50
};
RED4EXT_ASSERT_SIZE(RazerAnimation_NodeType, 0x60);
} // namespace quest
using questRazerAnimation_NodeType = quest::RazerAnimation_NodeType;
} // namespace RED4ext

// clang-format on
