#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct DoorDecoratorMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioDoorDecoratorMetadata";
    static constexpr const char* ALIAS = NAME;

    CName startOpen; // 38
    CName startClose; // 40
    CName endOpen; // 48
    CName endClose; // 50
    CName openLoop; // 58
    CName closeLoop; // 60
    float openTime; // 68
    float closeTime; // 6C
};
RED4EXT_ASSERT_SIZE(DoorDecoratorMetadata, 0x70);
} // namespace audio
using audioDoorDecoratorMetadata = audio::DoorDecoratorMetadata;
} // namespace RED4ext

// clang-format on
