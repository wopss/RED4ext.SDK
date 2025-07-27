#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IActionsFactory.hpp>

namespace RED4ext
{
namespace game
{
struct CActionsFactory : game::IActionsFactory
{
    static constexpr const char* NAME = "gameCActionsFactory";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x2F8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CActionsFactory, 0x2F8);
} // namespace game
using gameCActionsFactory = game::CActionsFactory;
} // namespace RED4ext

// clang-format on
