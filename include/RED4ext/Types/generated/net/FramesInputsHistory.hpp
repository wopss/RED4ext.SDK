#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/net/FrameInputs.hpp>

namespace RED4ext
{
namespace net { 
struct FramesInputsHistory
{
    static constexpr const char* NAME = "netFramesInputsHistory";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<net::FrameInputs> frames; // 08
};
RED4EXT_ASSERT_SIZE(FramesInputsHistory, 0x18);
} // namespace net
} // namespace RED4ext
