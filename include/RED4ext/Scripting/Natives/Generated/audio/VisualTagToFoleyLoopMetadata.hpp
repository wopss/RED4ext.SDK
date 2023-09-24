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
struct VisualTagToFoleyLoopMetadata
{
    static constexpr const char* NAME = "audioVisualTagToFoleyLoopMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> visualtags; // 00
    audio::FoleyLoopMetadata loop; // 10
};
RED4EXT_ASSERT_SIZE(VisualTagToFoleyLoopMetadata, 0x20);
} // namespace audio
using audioVisualTagToFoleyLoopMetadata = audio::VisualTagToFoleyLoopMetadata;
} // namespace RED4ext

// clang-format on
