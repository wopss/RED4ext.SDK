#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct CrowdTemplateCharacterData
{
    static constexpr const char* NAME = "gameCrowdTemplateCharacterData";
    static constexpr const char* ALIAS = NAME;

    TweakDBID characterRecordId; // 00
    float weight; // 08
};
RED4EXT_ASSERT_SIZE(CrowdTemplateCharacterData, 0xC);
} // namespace game
using gameCrowdTemplateCharacterData = game::CrowdTemplateCharacterData;
} // namespace RED4ext

// clang-format on
