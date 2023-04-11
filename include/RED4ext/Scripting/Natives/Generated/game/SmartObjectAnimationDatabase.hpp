#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AnimationExtractedData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BodyTypeData.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectAnimationDatabase : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectAnimationDatabase";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::AnimationExtractedData> animationData; // 30
    DynArray<game::BodyTypeData> bodyTypesData; // 40
    uint8_t unk50[0xD8 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(SmartObjectAnimationDatabase, 0xD8);
} // namespace game
using gameSmartObjectAnimationDatabase = game::SmartObjectAnimationDatabase;
} // namespace RED4ext

// clang-format on
