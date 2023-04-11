#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/gamePersistentID.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(game::PersistentID, 0x10);
using gamePersistentID = game::PersistentID;
using PersistentID = game::PersistentID;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game
{
struct PersistentID
{
    static constexpr const char* NAME = "gamePersistentID";
    static constexpr const char* ALIAS = "PersistentID";

    uint64_t entityHash; // 00
    CName componentName; // 08
};
RED4EXT_ASSERT_SIZE(PersistentID, 0x10);
} // namespace game
using gamePersistentID = game::PersistentID;
using PersistentID = game::PersistentID;
} // namespace RED4ext
*/

// clang-format on
