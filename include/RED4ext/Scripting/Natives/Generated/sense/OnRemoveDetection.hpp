#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace sense
{
struct OnRemoveDetection : red::Event
{
    static constexpr const char* NAME = "senseOnRemoveDetection";
    static constexpr const char* ALIAS = "OnRemoveDetection";

    WeakHandle<game::Object> target; // 40
};
RED4EXT_ASSERT_SIZE(OnRemoveDetection, 0x50);
} // namespace sense
using senseOnRemoveDetection = sense::OnRemoveDetection;
using OnRemoveDetection = sense::OnRemoveDetection;
} // namespace RED4ext

// clang-format on
