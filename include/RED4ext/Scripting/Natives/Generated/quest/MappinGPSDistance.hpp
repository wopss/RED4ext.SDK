#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistance.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct MappinGPSDistance : quest::IDistance
{
    static constexpr const char* NAME = "questMappinGPSDistance";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> mappinPath; // 30
};
RED4EXT_ASSERT_SIZE(MappinGPSDistance, 0x40);
} // namespace quest
using questMappinGPSDistance = quest::MappinGPSDistance;
} // namespace RED4ext

// clang-format on
