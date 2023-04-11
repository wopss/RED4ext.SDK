#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct ForceVMModule_NodeTypeParams
{
    static constexpr const char* NAME = "questForceVMModule_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference reference; // 00
    CString module; // 38
    DynArray<CName> components; // 58
};
RED4EXT_ASSERT_SIZE(ForceVMModule_NodeTypeParams, 0x68);
} // namespace quest
using questForceVMModule_NodeTypeParams = quest::ForceVMModule_NodeTypeParams;
} // namespace RED4ext

// clang-format on
