#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManager.hpp>

namespace RED4ext
{
namespace quest
{
struct PhoneManager : quest::IPhoneManager
{
    static constexpr const char* NAME = "questPhoneManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhoneManager, 0x90);
} // namespace quest
using questPhoneManager = quest::PhoneManager;
} // namespace RED4ext

// clang-format on
