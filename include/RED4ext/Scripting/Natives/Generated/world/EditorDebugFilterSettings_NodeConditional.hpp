#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EditorDebugFilterSettings.hpp>

namespace RED4ext
{
namespace world
{
struct EditorDebugFilterSettings_NodeConditional : world::EditorDebugFilterSettings
{
    static constexpr const char* NAME = "worldEditorDebugFilterSettings_NodeConditional";
    static constexpr const char* ALIAS = NAME;

    bool isDiscarded; // 30
    bool isProxyDependencyModeAutoSet; // 31
    bool isProxyDependencyModeDiscardedSet; // 32
    uint8_t unk33[0x38 - 0x33]; // 33
};
RED4EXT_ASSERT_SIZE(EditorDebugFilterSettings_NodeConditional, 0x38);
} // namespace world
using worldEditorDebugFilterSettings_NodeConditional = world::EditorDebugFilterSettings_NodeConditional;
} // namespace RED4ext

// clang-format on
