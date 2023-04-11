#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace tools
{
struct EditorObjectIDPath
{
    static constexpr const char* NAME = "toolsEditorObjectIDPath";
    static constexpr const char* ALIAS = NAME;

    DynArray<EditorObjectID> elements; // 00
};
RED4EXT_ASSERT_SIZE(EditorObjectIDPath, 0x10);
} // namespace tools
using toolsEditorObjectIDPath = tools::EditorObjectIDPath;
} // namespace RED4ext

// clang-format on
