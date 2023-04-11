#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct DependentWorkspotData : ISerializable
{
    static constexpr const char* NAME = "gameDependentWorkspotData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x68 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DependentWorkspotData, 0x68);
} // namespace game
using gameDependentWorkspotData = game::DependentWorkspotData;
} // namespace RED4ext

// clang-format on
