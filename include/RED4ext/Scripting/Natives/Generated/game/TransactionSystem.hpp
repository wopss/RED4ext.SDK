#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITransactionSystem.hpp>

namespace RED4ext
{
namespace game
{
struct TransactionSystem : game::ITransactionSystem
{
    static constexpr const char* NAME = "gameTransactionSystem";
    static constexpr const char* ALIAS = "TransactionSystem";

    uint8_t unk48[0x180 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TransactionSystem, 0x180);
} // namespace game
using gameTransactionSystem = game::TransactionSystem;
using TransactionSystem = game::TransactionSystem;
} // namespace RED4ext

// clang-format on
