#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/RazerChromaAnimationSet.hpp>

namespace RED4ext
{
namespace game
{
struct RazerChromaAnimationDatabase : CResource
{
    static constexpr const char* NAME = "gameRazerChromaAnimationDatabase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
    DynArray<game::RazerChromaAnimationSet> setsSerialized; // 70
};
RED4EXT_ASSERT_SIZE(RazerChromaAnimationDatabase, 0x80);
} // namespace game
using gameRazerChromaAnimationDatabase = game::RazerChromaAnimationDatabase;
} // namespace RED4ext

// clang-format on
