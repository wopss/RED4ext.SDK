#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { 
struct EntityParametersBuffer
{
    static constexpr const char* NAME = "entEntityParametersBuffer";
    static constexpr const char* ALIAS = NAME;

    DynArray<DeferredDataBuffer> parameterBuffers; // 00
    uint8_t unk10[0x28 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(EntityParametersBuffer, 0x28);
} // namespace ent
} // namespace RED4ext
