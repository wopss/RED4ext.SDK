#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct EntityEmitterSettings
{
    static constexpr const char* NAME = "audioEntityEmitterSettings";
    static constexpr const char* ALIAS = NAME;

    CName emitterName; // 00
    CName positionName; // 08
    DynArray<CName> emitterDecorators; // 10
    bool keepAlive; // 20
    bool isObjectPerPositionEmitter; // 21
    uint8_t unk22[0x38 - 0x22]; // 22
};
RED4EXT_ASSERT_SIZE(EntityEmitterSettings, 0x38);
} // namespace audio
using audioEntityEmitterSettings = audio::EntityEmitterSettings;
} // namespace RED4ext

// clang-format on
