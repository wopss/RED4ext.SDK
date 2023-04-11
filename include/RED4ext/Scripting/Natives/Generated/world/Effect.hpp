#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/LoopData.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
namespace effect { struct TrackGroup; }
namespace effect { struct TrackItem; }

namespace world
{
struct Effect : res::StreamedResource
{
    static constexpr const char* NAME = "worldEffect";
    static constexpr const char* ALIAS = NAME;

    CName name; // 40
    float length; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Handle<effect::TrackGroup> trackRoot; // 50
    DynArray<Handle<effect::TrackItem>> events; // 60
    DynArray<effect::LoopData> effectLoops; // 70
    DynArray<CName> inputParameterNames; // 80
};
RED4EXT_ASSERT_SIZE(Effect, 0x90);
} // namespace world
using worldEffect = world::Effect;
} // namespace RED4ext

// clang-format on
