#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/ISoundComponentSubSystem.hpp>

namespace RED4ext
{
namespace game::audio
{
struct RagdollSubSystem : game::audio::ISoundComponentSubSystem
{
    static constexpr const char* NAME = "gameaudioRagdollSubSystem";
    static constexpr const char* ALIAS = NAME;

    CName defaultMaterialMetadata; // 48
    CName lookupMatrixName; // 50
    CName customDismembermentSettings; // 58
    uint8_t unk60[0xD0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(RagdollSubSystem, 0xD0);
} // namespace game::audio
using gameaudioRagdollSubSystem = game::audio::RagdollSubSystem;
} // namespace RED4ext

// clang-format on
