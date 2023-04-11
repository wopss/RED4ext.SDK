#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct UIAnimationBraindanceEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsUIAnimationBraindanceEvent";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 58
    scn::PerformerId performerId; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    NodeRef nodeRef; // 68
};
RED4EXT_ASSERT_SIZE(UIAnimationBraindanceEvent, 0x70);
} // namespace scn::events
using scneventsUIAnimationBraindanceEvent = scn::events::UIAnimationBraindanceEvent;
} // namespace RED4ext

// clang-format on
