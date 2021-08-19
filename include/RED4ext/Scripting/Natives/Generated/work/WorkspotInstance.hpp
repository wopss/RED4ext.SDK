#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace work { 
struct WorkspotInstance : ISerializable
{
    static constexpr const char* NAME = "workWorkspotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x2A0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(WorkspotInstance, 0x2A0);
} // namespace work
} // namespace RED4ext
