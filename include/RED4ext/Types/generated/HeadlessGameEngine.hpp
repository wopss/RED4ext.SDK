#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/BaseGameEngine.hpp>

namespace RED4ext
{
struct HeadlessGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "HeadlessGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk238[0x240 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(HeadlessGameEngine, 0x240);
} // namespace RED4ext
