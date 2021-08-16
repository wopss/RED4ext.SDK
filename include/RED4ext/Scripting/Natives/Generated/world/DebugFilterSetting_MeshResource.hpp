#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugFilterSettings.hpp>

namespace RED4ext
{
namespace world { 
struct DebugFilterSetting_MeshResource : world::EditorDebugFilterSettings
{
    static constexpr const char* NAME = "worldDebugFilterSetting_MeshResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> resourcePaths; // 30
    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DebugFilterSetting_MeshResource, 0x78);
} // namespace world
} // namespace RED4ext
