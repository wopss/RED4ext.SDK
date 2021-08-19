#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IGuardAreaManager.hpp>

namespace RED4ext
{
namespace AI { 
struct GuardAreaManager : AI::IGuardAreaManager
{
    static constexpr const char* NAME = "AIGuardAreaManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x160 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GuardAreaManager, 0x160);
} // namespace AI
} // namespace RED4ext
