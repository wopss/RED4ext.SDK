#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISystem.hpp>

namespace RED4ext
{
namespace AI { 
struct SystemImpl : AI::ISystem
{
    static constexpr const char* NAME = "AISystemImpl";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x220 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SystemImpl, 0x220);
} // namespace AI
} // namespace RED4ext
