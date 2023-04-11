#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTargetAddEvent.hpp>

namespace RED4ext
{
namespace ent { struct IOrientationProvider; }

namespace ent
{
struct IKTargetAddEvent : ent::AnimTargetAddEvent
{
    static constexpr const char* NAME = "entIKTargetAddEvent";
    static constexpr const char* ALIAS = "IKTargetAddEvent";

    anim::IKTargetRef outIKTargetRef; // 58
    Handle<ent::IOrientationProvider> orientationProvider; // 68
    anim::IKTargetRequest request; // 78
};
RED4EXT_ASSERT_SIZE(IKTargetAddEvent, 0x90);
} // namespace ent
using entIKTargetAddEvent = ent::IKTargetAddEvent;
using IKTargetAddEvent = ent::IKTargetAddEvent;
} // namespace RED4ext

// clang-format on
