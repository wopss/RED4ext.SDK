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
struct ScriptsTargetTrackingListener : AI::ITargetTrackingListener
{
    static constexpr const char* NAME = "AIScriptsTargetTrackingListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScriptsTargetTrackingListener, 0x98);
} // namespace AI
using AIScriptsTargetTrackingListener = AI::ScriptsTargetTrackingListener;
} // namespace RED4ext

// clang-format on
