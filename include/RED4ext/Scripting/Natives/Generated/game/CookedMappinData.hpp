#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game::mappins { struct IMappinVolume; }

namespace game
{
struct CookedMappinData
{
    static constexpr const char* NAME = "gameCookedMappinData";
    static constexpr const char* ALIAS = NAME;

    uint32_t journalPathHash; // 00
    Vector3 position; // 04
    Handle<game::mappins::IMappinVolume> volume; // 10
};
RED4EXT_ASSERT_SIZE(CookedMappinData, 0x20);
} // namespace game
using gameCookedMappinData = game::CookedMappinData;
} // namespace RED4ext

// clang-format on
