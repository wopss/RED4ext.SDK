#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/GameEntity.hpp>
#include <RED4ext/Types/generated/game/PlayerSocket.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>

namespace RED4ext
{
namespace game { struct PersistentState; }

namespace game { 
struct Object : ent::GameEntity
{
    static constexpr const char* NAME = "gameObject";
    static constexpr const char* ALIAS = "GameObject";

    uint8_t unk158[0x160 - 0x158]; // 158
    Handle<game::PersistentState> persistentState; // 160
    LocalizationString displayName; // 170
    LocalizationString displayDescription; // 198
    CName audioResourceName; // 1C0
    game::PlayerSocket playerSocket; // 1C8
    float visibilityCheckDistance; // 1F0
    uint8_t unk1F4[0x218 - 0x1F4]; // 1F4
    red::TagList tags; // 218
};
RED4EXT_ASSERT_SIZE(Object, 0x228);
} // namespace game
using GameObject = game::Object;
} // namespace RED4ext
