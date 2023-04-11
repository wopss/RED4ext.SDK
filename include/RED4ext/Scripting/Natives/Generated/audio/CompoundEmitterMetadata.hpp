#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct CompoundEmitterMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioCompoundEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
    DynArray<CName> childrenNames; // 48
};
RED4EXT_ASSERT_SIZE(CompoundEmitterMetadata, 0x58);
} // namespace audio
using audioCompoundEmitterMetadata = audio::CompoundEmitterMetadata;
} // namespace RED4ext

// clang-format on
