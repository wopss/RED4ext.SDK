#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/ISenseManager.hpp>

namespace RED4ext
{
namespace sense { 
struct CSenseManager : sense::ISenseManager
{
    static constexpr const char* NAME = "senseCSenseManager";
    static constexpr const char* ALIAS = "SenseManager";

    uint8_t unk48[0x188 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CSenseManager, 0x188);
} // namespace sense
using SenseManager = sense::CSenseManager;
} // namespace RED4ext
