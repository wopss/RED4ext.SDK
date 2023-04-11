#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct UnmountEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnUnmountEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(UnmountEvent, 0x60);
} // namespace scn
using scnUnmountEvent = scn::UnmountEvent;
} // namespace RED4ext

// clang-format on
