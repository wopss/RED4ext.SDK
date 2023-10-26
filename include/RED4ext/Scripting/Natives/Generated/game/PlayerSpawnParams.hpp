#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PlayerSpawnParams
{
    static constexpr const char* NAME = "gamePlayerSpawnParams";
    static constexpr const char* ALIAS = NAME;

    Transform spawnPoint; // 00
    TweakDBID recordId; // 20
    CName gender; // 28
    red::TagList spawnTags; // 30
    bool useSpecifiedStartPoint; // 40
    bool isSpectator; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    CString nickname; // 48
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(PlayerSpawnParams, 0x70);
} // namespace game
using gamePlayerSpawnParams = game::PlayerSpawnParams;
} // namespace RED4ext

// clang-format on
