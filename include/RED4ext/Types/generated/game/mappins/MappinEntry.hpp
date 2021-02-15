#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/game/NewMappinID.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct MappinEntry
{
    static constexpr const char* NAME = "gamemappinsMappinEntry";
    static constexpr const char* ALIAS = "MappinEntry";

    game::NewMappinID id; // 00
    CName type; // 08
    Vector4 worldPosition; // 10
};
RED4EXT_ASSERT_SIZE(MappinEntry, 0x20);
} // namespace game::mappins
using MappinEntry = game::mappins::MappinEntry;
} // namespace RED4ext
