#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InputSocketId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OutputSocketStamp.hpp>

namespace RED4ext
{
namespace scn
{
struct OutputSocket
{
    static constexpr const char* NAME = "scnOutputSocket";
    static constexpr const char* ALIAS = NAME;

    scn::OutputSocketStamp stamp; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<scn::InputSocketId> destinations; // 08
};
RED4EXT_ASSERT_SIZE(OutputSocket, 0x18);
} // namespace scn
using scnOutputSocket = scn::OutputSocket;
} // namespace RED4ext

// clang-format on
