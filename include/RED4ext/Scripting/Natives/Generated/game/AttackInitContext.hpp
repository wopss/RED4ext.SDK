#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::data { struct Attack_Record; }
namespace game::weapon { struct Object; }

namespace game
{
struct AttackInitContext
{
    static constexpr const char* NAME = "gameAttackInitContext";
    static constexpr const char* ALIAS = "AttackInitContext";

    Handle<game::data::Attack_Record> record; // 00
    WeakHandle<game::Object> instigator; // 10
    WeakHandle<game::Object> source; // 20
    WeakHandle<game::weapon::Object> weapon; // 30
};
RED4EXT_ASSERT_SIZE(AttackInitContext, 0x40);
} // namespace game
using gameAttackInitContext = game::AttackInitContext;
using AttackInitContext = game::AttackInitContext;
} // namespace RED4ext

// clang-format on
