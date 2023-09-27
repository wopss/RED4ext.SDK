#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyLoopMetadata
{
    static constexpr const char* NAME = "audioFoleyLoopMetadata";
    static constexpr const char* ALIAS = NAME;

    CName startEvent; // 00
    CName stopEvent; // 08
};
RED4EXT_ASSERT_SIZE(FoleyLoopMetadata, 0x10);
} // namespace audio
using audioFoleyLoopMetadata = audio::FoleyLoopMetadata;
} // namespace RED4ext

// clang-format on
