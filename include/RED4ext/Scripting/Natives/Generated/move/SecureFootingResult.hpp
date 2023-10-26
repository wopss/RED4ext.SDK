#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/SecureFootingFailureReason.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/SecureFootingFailureType.hpp>

namespace RED4ext
{
namespace move
{
struct __declspec(align(0x10)) SecureFootingResult
{
    static constexpr const char* NAME = "moveSecureFootingResult";
    static constexpr const char* ALIAS = "SecureFootingResult";

    Vector4 slidingDirection; // 00
    Vector4 normalDirection; // 10
    Vector4 lowestLocalPosition; // 20
    float staticGroundFactor; // 30
    move::SecureFootingFailureReason reason; // 34
    move::SecureFootingFailureType type; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SecureFootingResult, 0x40);
} // namespace move
using moveSecureFootingResult = move::SecureFootingResult;
using SecureFootingResult = move::SecureFootingResult;
} // namespace RED4ext

// clang-format on
