#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalInternetBase.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace game
{
struct JournalInternetImage : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetImage";
    static constexpr const char* ALIAS = "JournalInternetImage";

    RaRef<ink::TextureAtlas> textureAtlas; // 70
    CName texturePart; // 78
};
RED4EXT_ASSERT_SIZE(JournalInternetImage, 0x80);
} // namespace game
using gameJournalInternetImage = game::JournalInternetImage;
using JournalInternetImage = game::JournalInternetImage;
} // namespace RED4ext

// clang-format on
