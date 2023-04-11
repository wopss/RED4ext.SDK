#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ClassificationMethod.hpp>

namespace RED4ext
{
namespace audio
{
struct GroupingTagMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioGroupingTagMetadata";
    static constexpr const char* ALIAS = NAME;

    CName shape; // 38
    audio::ClassificationMethod classificationMethod; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName inputEmitterName; // 48
    DynArray<CName> inputEventNames; // 50
    DynArray<CName> inputTags; // 60
    CName outputEventId; // 70
    float minimalGroupCount; // 78
    float fullGroupCount; // 7C
    uint8_t unk80[0xA0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(GroupingTagMetadata, 0xA0);
} // namespace audio
using audioGroupingTagMetadata = audio::GroupingTagMetadata;
} // namespace RED4ext

// clang-format on
