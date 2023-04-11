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
struct VisualTagToNPCMetadata
{
    static constexpr const char* NAME = "audioVisualTagToNPCMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> visualTags; // 00
    CName foleyNPCMetadata; // 10
};
RED4EXT_ASSERT_SIZE(VisualTagToNPCMetadata, 0x18);
} // namespace audio
using audioVisualTagToNPCMetadata = audio::VisualTagToNPCMetadata;
} // namespace RED4ext

// clang-format on
