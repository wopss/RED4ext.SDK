#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/MessageSeverity.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/MessageVerbosity.hpp>

namespace RED4ext
{
namespace tools { struct IMessageLocation; }
namespace tools { struct IMessageToken; }

namespace tools
{
struct Message
{
    static constexpr const char* NAME = "toolsMessage";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<tools::IMessageToken>> tokens; // 00
    Handle<tools::IMessageLocation> location; // 10
    uint8_t unk20[0x30 - 0x20]; // 20
    int64_t created; // 30
    tools::MessageSeverity severity; // 38
    tools::MessageVerbosity verbosity; // 3C
};
RED4EXT_ASSERT_SIZE(Message, 0x40);
} // namespace tools
using toolsMessage = tools::Message;
} // namespace RED4ext

// clang-format on
