#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/EditorObjectIDPath.hpp>

namespace RED4ext
{
namespace interop
{
struct EntityEffectSelectionSyncData
{
    static constexpr const char* NAME = "interopEntityEffectSelectionSyncData";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 00
    tools::EditorObjectIDPath effectIDPath; // 08
};
RED4EXT_ASSERT_SIZE(EntityEffectSelectionSyncData, 0x18);
} // namespace interop
using interopEntityEffectSelectionSyncData = interop::EntityEffectSelectionSyncData;
} // namespace RED4ext

// clang-format on
