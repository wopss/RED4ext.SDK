#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/FoleyItemPriority.hpp>

namespace RED4ext
{
namespace audio
{
struct AppearanceToPlayerMetadata
{
    static constexpr const char* NAME = "audioAppearanceToPlayerMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 00
    CName foleyPlayerMetadata; // 10
    audio::FoleyItemPriority priority; // 18
    uint8_t unk19[0x28 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(AppearanceToPlayerMetadata, 0x28);
} // namespace audio
using audioAppearanceToPlayerMetadata = audio::AppearanceToPlayerMetadata;
} // namespace RED4ext

// clang-format on
