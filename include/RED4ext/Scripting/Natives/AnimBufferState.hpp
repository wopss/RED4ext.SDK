#pragma once

#include <RED4ext/Buffer.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct AnimBufferState
{
    enum State : uint8_t
    {
        Empty = 0,
        Loading,
        Ready,
        External,
    };

    SharedPtr<DeferredDataBufferCopyToken> token; // 00
    JobHandle job;                                // 10
    uint32_t requestsCounter;                     // 18
    State state;                                  // 1C
    uint8_t unk1E;                                // 1E
};
RED4EXT_ASSERT_SIZE(AnimBufferState, 0x20);
} // namespace anim
} // namespace RED4ext
