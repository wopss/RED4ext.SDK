#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct NotPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameNotPrereq";
    static constexpr const char* ALIAS = "NotPrereq";

    Handle<game::IPrereq> negatedPrereq; // 40
};
RED4EXT_ASSERT_SIZE(NotPrereq, 0x50);
} // namespace game
using gameNotPrereq = game::NotPrereq;
using NotPrereq = game::NotPrereq;
} // namespace RED4ext

// clang-format on
