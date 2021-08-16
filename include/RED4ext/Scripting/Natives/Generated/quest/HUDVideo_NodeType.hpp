#pragma once

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

namespace quest { 
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
    uint8_t unk5F[0x60 - 0x5F]; // 5F
};
RED4EXT_ASSERT_SIZE(HUDVideo_NodeType, 0x60);
} // namespace quest
} // namespace RED4ext
