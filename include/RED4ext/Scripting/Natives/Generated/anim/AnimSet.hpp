#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDataChunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
struct CResource;
namespace anim { struct AnimSetEntry; }
namespace anim { struct Rig; }

namespace anim { 
struct AnimSet : CResource
{
    static constexpr const char* NAME = "animAnimSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimSetEntry>> animations; // 40
    DynArray<anim::AnimDataChunk> animationDataChunks; // 50
    uint8_t unk60[0x98 - 0x60]; // 60
    Ref<anim::Rig> rig; // 98
    Ref<CResource> correspondingArchetype; // B0
    red::TagList tags; // C8
    uint8_t unkD8[0x118 - 0xD8]; // D8
    uint32_t version; // 118
    uint8_t unk11C[0x120 - 0x11C]; // 11C
};
RED4EXT_ASSERT_SIZE(AnimSet, 0x120);
} // namespace anim
} // namespace RED4ext
