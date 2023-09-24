#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct UniversalRef : ISerializable
{
    static constexpr const char* NAME = "questUniversalRef";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 30
    bool refLocalPlayer; // 68
    bool mainPlayerObject; // 69
    uint8_t unk6A[0x78 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(UniversalRef, 0x78);
} // namespace quest
using questUniversalRef = quest::UniversalRef;
} // namespace RED4ext

// clang-format on
