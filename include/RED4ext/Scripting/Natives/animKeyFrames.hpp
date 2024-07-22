#pragma once

#include <cstdint>

namespace RED4ext
{
namespace anim
{
enum KeyFrameChannel
{
    Translation = 0,
    Rotation,
    Scale,
};

struct KeyFrameHeader
{
    uint16_t timeNormalized;    // 00
    uint16_t boneIndex : 13;    // 02
    uint16_t channel : 2;       // 0E
    uint16_t rotationWSign : 1; // 0F
};
RED4EXT_ASSERT_SIZE(KeyFrameHeader, 0x4);
RED4EXT_ASSERT_OFFSET(KeyFrameHeader, timeNormalized, 0x0);

struct KeyFrameCompressed : KeyFrameHeader
{
    uint16_t x; // 00
    uint16_t y; // 02
    uint16_t z; // 04
};
RED4EXT_ASSERT_SIZE(KeyFrameCompressed, 0xA);

struct KeyFrameRaw : KeyFrameHeader
{
    float x; // 00
    float y; // 04
    float z; // 08
};
RED4EXT_ASSERT_SIZE(KeyFrameRaw, 0x10);

struct KeyFrameConst
{
    uint16_t boneIndex : 13;
    uint16_t channel : 2;
    uint16_t rotationWSign : 1;

    float x; // 02
    float y; // 06
    float z; // 0A
};
RED4EXT_ASSERT_SIZE(KeyFrameConst, 0x10);

struct TrackKey
{
    uint16_t time;  // 00
    uint16_t index; // 02
    float value;    // 04
};
RED4EXT_ASSERT_SIZE(TrackKey, 0x8);

struct TrackKeyConst // 6 Bytes?
{
    uint16_t index; // 00
    float value;    // 02
};
RED4EXT_ASSERT_SIZE(TrackKeyConst, 0x8);

} // namespace anim
} // namespace RED4ext
