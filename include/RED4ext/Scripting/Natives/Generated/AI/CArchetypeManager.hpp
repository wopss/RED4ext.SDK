#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IArchetypeManager.hpp>

namespace RED4ext
{
namespace AI
{
struct CArchetypeManager : AI::IArchetypeManager
{
    static constexpr const char* NAME = "AICArchetypeManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CArchetypeManager, 0x78);
} // namespace AI
using AICArchetypeManager = AI::CArchetypeManager;
} // namespace RED4ext

// clang-format on
