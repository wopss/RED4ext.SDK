#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/EditorObjectIDPath.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools
{
struct MessageLocation_EditorObject : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_EditorObject";
    static constexpr const char* ALIAS = NAME;

    tools::EditorObjectIDPath path; // 30
};
RED4EXT_ASSERT_SIZE(MessageLocation_EditorObject, 0x40);
} // namespace tools
using toolsMessageLocation_EditorObject = tools::MessageLocation_EditorObject;
} // namespace RED4ext

// clang-format on
