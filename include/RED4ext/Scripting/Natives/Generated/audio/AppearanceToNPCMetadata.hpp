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
struct AppearanceToNPCMetadata
{
    static constexpr const char* NAME = "audioAppearanceToNPCMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 00
    CName foleyNPCMetadata; // 10
};
RED4EXT_ASSERT_SIZE(AppearanceToNPCMetadata, 0x18);
} // namespace audio
using audioAppearanceToNPCMetadata = audio::AppearanceToNPCMetadata;
} // namespace RED4ext

// clang-format on
