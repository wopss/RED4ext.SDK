#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace game
{
struct TutorialOverlayUserData : ink::UserData
{
    static constexpr const char* NAME = "gameTutorialOverlayUserData";
    static constexpr const char* ALIAS = "TutorialOverlayUserData";

    uint32_t overlayId; // 40
    bool hideOnInput; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(TutorialOverlayUserData, 0x48);
} // namespace game
using gameTutorialOverlayUserData = game::TutorialOverlayUserData;
using TutorialOverlayUserData = game::TutorialOverlayUserData;
} // namespace RED4ext

// clang-format on
