#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ITargetTrackingListener.hpp>

namespace RED4ext
{
namespace AI
{
struct ScriptsTargetTrackingListenerWrapper : AI::ITargetTrackingListener
{
    static constexpr const char* NAME = "AIScriptsTargetTrackingListenerWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScriptsTargetTrackingListenerWrapper, 0x58);
} // namespace AI
using AIScriptsTargetTrackingListenerWrapper = AI::ScriptsTargetTrackingListenerWrapper;
} // namespace RED4ext

// clang-format on
