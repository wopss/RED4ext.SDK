#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDataChunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFallbackFrameDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/animAnimBufferState.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct AnimSetEntry;
struct Rig;

struct AnimSet : CResource
{
    static constexpr const char* NAME = "animAnimSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimSetEntry>> animations;              // 40
    DynArray<anim::AnimDataChunk> animationDataChunks;            // 50
    AnimBufferState* dataState;                                   // 60
    DataBuffer fallbackAnimDataBuffer;                            // 68
    uint8_t unk90[0xA8 - 0x90];                                   // 90
    DynArray<anim::AnimFallbackFrameDesc> fallbackAnimFrameDescs; // A8
    uint8_t unkB8[0xC8 - 0xB8];                                   // B8
    DynArray<uint16_t> fallbackDataAddresses;                     // C8
    DynArray<uint8_t> fallbackAnimDescIndexes;                    // D8
    DynArray<uint8_t> fallbackDataAddressIndexes;                 // E8
    uint16_t fallbackNumPositionData;                             // F8
    uint16_t fallbackNumRotationData;                             // FA
    uint16_t fallbackNumFloatTrackData;                           // FC
    uint8_t unkFE[0x130 - 0xFE];                                  // FE
    Ref<anim::Rig> rig;                                           // 130
    red::TagList tags;                                            // 148
    uint8_t unk158[0x1E8 - 0x158];                                // 158
    uint32_t version;                                             // 1E8
    uint8_t unk1EC[0x1F0 - 0x1EC];                                // 1EC
};
RED4EXT_ASSERT_SIZE(AnimSet, 0x1F0);
} // namespace anim
using animAnimSet = anim::AnimSet;
} // namespace RED4ext
