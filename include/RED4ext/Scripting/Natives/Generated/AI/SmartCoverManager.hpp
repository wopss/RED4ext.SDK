#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISmartCoverManager.hpp>

namespace RED4ext
{
namespace AI { 
struct SmartCoverManager : AI::ISmartCoverManager
{
    static constexpr const char* NAME = "AISmartCoverManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x260 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SmartCoverManager, 0x260);
} // namespace AI
} // namespace RED4ext
