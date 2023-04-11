#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinVolume.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct OutlineMappinVolume : game::mappins::IMappinVolume
{
    static constexpr const char* NAME = "gamemappinsOutlineMappinVolume";
    static constexpr const char* ALIAS = NAME;

    float height; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Vector2> outlinePoints; // 38
};
RED4EXT_ASSERT_SIZE(OutlineMappinVolume, 0x48);
} // namespace game::mappins
using gamemappinsOutlineMappinVolume = game::mappins::OutlineMappinVolume;
} // namespace RED4ext

// clang-format on
