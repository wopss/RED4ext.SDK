#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/EntityEffectSelectionSyncData.hpp>

namespace RED4ext
{
namespace interop
{
struct EntityEffectSpawnerSyncData
{
    static constexpr const char* NAME = "interopEntityEffectSpawnerSyncData";
    static constexpr const char* ALIAS = NAME;

    EditorObjectID componentID; // 00
    EditorObjectID componentParentID; // 20
    CName componentName; // 40
    DynArray<interop::EntityEffectSelectionSyncData> effects; // 48
    CString templatePath; // 58
    Color templateColor; // 78
    bool included; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
};
RED4EXT_ASSERT_SIZE(EntityEffectSpawnerSyncData, 0x80);
} // namespace interop
using interopEntityEffectSpawnerSyncData = interop::EntityEffectSpawnerSyncData;
} // namespace RED4ext

// clang-format on
