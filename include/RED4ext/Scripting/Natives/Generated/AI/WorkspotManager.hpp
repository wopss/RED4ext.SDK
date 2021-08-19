#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IWorkspotManager.hpp>

namespace RED4ext
{
namespace AI { 
struct WorkspotManager : AI::IWorkspotManager
{
    static constexpr const char* NAME = "AIWorkspotManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x240 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorkspotManager, 0x240);
} // namespace AI
} // namespace RED4ext
