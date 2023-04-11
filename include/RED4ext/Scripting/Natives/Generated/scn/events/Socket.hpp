#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OutputSocketStamp.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct Socket : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsSocket";
    static constexpr const char* ALIAS = NAME;

    scn::OutputSocketStamp osockStamp; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(Socket, 0x60);
} // namespace scn::events
using scneventsSocket = scn::events::Socket;
} // namespace RED4ext

// clang-format on
