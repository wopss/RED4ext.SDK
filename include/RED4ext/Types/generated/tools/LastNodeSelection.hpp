#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/tools/EditorObjectIDPath.hpp>

namespace RED4ext
{
namespace tools { 
struct LastNodeSelection
{
    static constexpr const char* NAME = "toolsLastNodeSelection";
    static constexpr const char* ALIAS = NAME;

    CString editorName; // 00
    tools::EditorObjectIDPath selectedNodeIDPath; // 20
};
RED4EXT_ASSERT_SIZE(LastNodeSelection, 0x30);
} // namespace tools
} // namespace RED4ext
