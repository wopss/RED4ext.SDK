#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace ent
{
struct CollisionPredictionPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entCollisionPredictionPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x88 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CollisionPredictionPositionProvider, 0x88);
} // namespace ent
using entCollisionPredictionPositionProvider = ent::CollisionPredictionPositionProvider;
} // namespace RED4ext

// clang-format on
