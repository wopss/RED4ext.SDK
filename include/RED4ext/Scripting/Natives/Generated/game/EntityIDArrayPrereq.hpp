#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct EntityIDArrayPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameEntityIDArrayPrereq";
    static constexpr const char* ALIAS = "EntityIDArrayPrereq";

};
RED4EXT_ASSERT_SIZE(EntityIDArrayPrereq, 0x40);
} // namespace game
using gameEntityIDArrayPrereq = game::EntityIDArrayPrereq;
using EntityIDArrayPrereq = game::EntityIDArrayPrereq;
} // namespace RED4ext

// clang-format on
