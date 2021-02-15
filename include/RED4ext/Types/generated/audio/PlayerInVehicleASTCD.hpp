#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/audio/AudioStateTransitionConditionData.hpp>

namespace RED4ext
{
namespace audio { 
struct PlayerInVehicleASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioPlayerInVehicleASTCD";
    static constexpr const char* ALIAS = NAME;

    bool isInside; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(PlayerInVehicleASTCD, 0x40);
} // namespace audio
} // namespace RED4ext
