#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct IPositionProvider; }

namespace ent
{
struct AnimTargetAddEvent : red::Event
{
    static constexpr const char* NAME = "entAnimTargetAddEvent";
    static constexpr const char* ALIAS = "AnimTargetAddEvent";

    Handle<ent::IPositionProvider> targetPositionProvider; // 40
    CName bodyPart; // 50
};
RED4EXT_ASSERT_SIZE(AnimTargetAddEvent, 0x58);
} // namespace ent
using entAnimTargetAddEvent = ent::AnimTargetAddEvent;
using AnimTargetAddEvent = ent::AnimTargetAddEvent;
} // namespace RED4ext

// clang-format on
