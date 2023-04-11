#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimationBuffer.hpp>

namespace RED4ext
{
namespace anim
{
struct CAnimationBufferUncompressed : anim::IAnimationBuffer
{
    static constexpr const char* NAME = "animCAnimationBufferUncompressed";
    static constexpr const char* ALIAS = NAME;

    DynArray<DynArray<QsTransform>> transforms; // 30
    DynArray<DynArray<float>> tracks; // 40
    float duration; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(CAnimationBufferUncompressed, 0x58);
} // namespace anim
using animCAnimationBufferUncompressed = anim::CAnimationBufferUncompressed;
} // namespace RED4ext

// clang-format on
