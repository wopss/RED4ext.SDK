#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AnimsetOverrideData.hpp>

namespace RED4ext
{
namespace game
{
struct BodyTypeData
{
    static constexpr const char* NAME = "gameBodyTypeData";
    static constexpr const char* ALIAS = NAME;

    uint64_t rigHash; // 00
    DynArray<uint64_t> animsetHashes; // 08
    DynArray<game::AnimsetOverrideData> overrides; // 18
};
RED4EXT_ASSERT_SIZE(BodyTypeData, 0x28);
} // namespace game
using gameBodyTypeData = game::BodyTypeData;
} // namespace RED4ext

// clang-format on
