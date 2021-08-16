#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/IWorkspotSystem.hpp>

namespace RED4ext
{
namespace work { 
struct WorkspotSystem : world::IWorkspotSystem
{
    static constexpr const char* NAME = "workWorkspotSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorkspotSystem, 0xA58);
} // namespace work
} // namespace RED4ext
