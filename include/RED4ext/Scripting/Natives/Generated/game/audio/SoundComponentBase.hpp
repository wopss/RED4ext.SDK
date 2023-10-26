#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::audio
{
struct __declspec(align(0x10)) SoundComponentBase : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameaudioSoundComponentBase";
    static constexpr const char* ALIAS = "SoundComponentBase";

    CName audioName; // 120
    uint8_t unk128[0x131 - 0x128]; // 128
    bool applyObstruction; // 131
    bool applyAcousticOcclusion; // 132
    bool applyAcousticRepositioning; // 133
    uint8_t unk134[0x138 - 0x134]; // 134
    float obstructionChangeTime; // 138
    uint8_t unk13C[0x158 - 0x13C]; // 13C
    float maxPlayDistance; // 158
    uint8_t unk15C[0x180 - 0x15C]; // 15C
};
RED4EXT_ASSERT_SIZE(SoundComponentBase, 0x180);
} // namespace game::audio
using gameaudioSoundComponentBase = game::audio::SoundComponentBase;
using SoundComponentBase = game::audio::SoundComponentBase;
} // namespace RED4ext

// clang-format on
