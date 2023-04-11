#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/IStreamedResourceDataExtractor.hpp>

namespace RED4ext
{
namespace game
{
struct StreamingSmartObjectsDataExtractor : res::IStreamedResourceDataExtractor
{
    static constexpr const char* NAME = "gameStreamingSmartObjectsDataExtractor";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StreamingSmartObjectsDataExtractor, 0x8);
} // namespace game
using gameStreamingSmartObjectsDataExtractor = game::StreamingSmartObjectsDataExtractor;
} // namespace RED4ext

// clang-format on
