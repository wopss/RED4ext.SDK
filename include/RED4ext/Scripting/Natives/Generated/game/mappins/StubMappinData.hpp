#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/MappinData.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct StubMappinData : game::mappins::MappinData
{
    static constexpr const char* NAME = "gamemappinsStubMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(StubMappinData, 0x80);
} // namespace game::mappins
using gamemappinsStubMappinData = game::mappins::StubMappinData;
} // namespace RED4ext

// clang-format on
