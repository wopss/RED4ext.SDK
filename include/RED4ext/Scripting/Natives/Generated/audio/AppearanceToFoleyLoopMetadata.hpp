#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/FoleyLoopMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AppearanceToFoleyLoopMetadata
{
    static constexpr const char* NAME = "audioAppearanceToFoleyLoopMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 00
    audio::FoleyLoopMetadata loop; // 10
};
RED4EXT_ASSERT_SIZE(AppearanceToFoleyLoopMetadata, 0x20);
} // namespace audio
using audioAppearanceToFoleyLoopMetadata = audio::AppearanceToFoleyLoopMetadata;
} // namespace RED4ext

// clang-format on
