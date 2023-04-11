#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace game
{
struct TutorialOverlayData
{
    static constexpr const char* NAME = "gameTutorialOverlayData";
    static constexpr const char* ALIAS = "TutorialOverlayData";

    CName itemName; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    red::ResourceReferenceScriptToken widgetLibraryResource; // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(TutorialOverlayData, 0x28);
} // namespace game
using gameTutorialOverlayData = game::TutorialOverlayData;
using TutorialOverlayData = game::TutorialOverlayData;
} // namespace RED4ext

// clang-format on
