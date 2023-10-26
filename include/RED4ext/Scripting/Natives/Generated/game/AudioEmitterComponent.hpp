#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntityEmitterContextType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AudioSyncs.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) AudioEmitterComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameAudioEmitterComponent";
    static constexpr const char* ALIAS = "audioEmitter";

    uint8_t unk120[0x138 - 0x120]; // 120
    float updateDistance; // 138
    uint8_t unk13C[0x140 - 0x13C]; // 13C
    CName EmitterName; // 140
    audio::EntityEmitterContextType EmitterType; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    game::AudioSyncs OnAttach; // 150
    game::AudioSyncs OnDetach; // 190
    DynArray<CName> Tags; // 1D0
    red::TagList TagList; // 1E0
    CName emitterMetadataName; // 1F0
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(AudioEmitterComponent, 0x200);
} // namespace game
using gameAudioEmitterComponent = game::AudioEmitterComponent;
using audioEmitter = game::AudioEmitterComponent;
} // namespace RED4ext

// clang-format on
