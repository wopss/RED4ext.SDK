#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseInfoLoggerEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct PoseInfoLoggerEntry_Transform : anim::PoseInfoLoggerEntry
{
    static constexpr const char* NAME = "animPoseInfoLoggerEntry_Transform";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transform; // 30
    bool logInModelSpace; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(PoseInfoLoggerEntry_Transform, 0x50);
} // namespace anim
using animPoseInfoLoggerEntry_Transform = anim::PoseInfoLoggerEntry_Transform;
} // namespace RED4ext

// clang-format on
