#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ForceVMModule_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVisionModeNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ForceModule_NodeType : quest::IVisionModeNodeType
{
    static constexpr const char* NAME = "questForceModule_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ForceVMModule_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(ForceModule_NodeType, 0x40);
} // namespace quest
using questForceModule_NodeType = quest::ForceModule_NodeType;
} // namespace RED4ext

// clang-format on
