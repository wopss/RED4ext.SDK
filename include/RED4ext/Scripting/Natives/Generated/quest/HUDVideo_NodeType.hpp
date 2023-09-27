#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
struct Bink;

namespace quest
{
struct HUDVideo_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questHUDVideo_NodeType";
    static constexpr const char* ALIAS = NAME;

    RaRef<Bink> video; // 38
    Vector2 position; // 40
    Vector2 size; // 48
    CName audioEvent; // 50
    bool syncToAudio; // 58
    bool retriggerAudioOnLoop; // 59
    bool skippable; // 5A
    bool looped; // 5B
    bool forceVideoFrameRate; // 5C
    bool playOnHud; // 5D
    bool fullScreen; // 5E
    bool useFullscreenVideoState; // 5F
    bool keepWidescreenAspectRatio; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(HUDVideo_NodeType, 0x68);
} // namespace quest
using questHUDVideo_NodeType = quest::HUDVideo_NodeType;
} // namespace RED4ext

// clang-format on
