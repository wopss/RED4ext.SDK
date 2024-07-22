#pragma once

#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/animMetaRig.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct AnimatedObject // This name might be wrong, it's an inference based on context
{
    uint64_t metaRigID;             // 00
    anim::MetaRig* metaRig;         // 08
    anim::MetaRigInfo* metaRigInfo; // 10
    uint8_t unk18[0x98 - 0x18];     // 18
    uint32_t cameraDistanceLevel;   // 9C
    uint8_t unkA0[0xA8 - 0xA0];     // A0
    uint32_t lastDistanceLevel;     // AC
    uint8_t unkB0[0xC0 - 0xB0];     // B0
    Box objectBounds;               // C0
    uint32_t unkE0;                 // E0
    float distanceFromCamera;       // E4
    uint8_t unkE8[0x100 - 0xE8];    // E8
};
RED4EXT_ASSERT_SIZE(AnimatedObject, 0x100);

} // namespace anim
} // namespace RED4ext
