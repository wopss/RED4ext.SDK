#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct EditorDebugFilterSettings : ISerializable
{
    static constexpr const char* NAME = "worldEditorDebugFilterSettings";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EditorDebugFilterSettings, 0x30);
} // namespace world
using worldEditorDebugFilterSettings = world::EditorDebugFilterSettings;
} // namespace RED4ext

// clang-format on
