#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game::mappins { struct IMappinVolume; }

namespace game
{
struct CookedAreaData
{
    static constexpr const char* NAME = "gameCookedAreaData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityID; // 00
    Vector3 position; // 08
    float radius; // 14
    Handle<game::mappins::IMappinVolume> volume; // 18
};
RED4EXT_ASSERT_SIZE(CookedAreaData, 0x28);
} // namespace game
using gameCookedAreaData = game::CookedAreaData;
} // namespace RED4ext

// clang-format on
