#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OverridePhantomParamsEventParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct OverridePhantomParamsEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnOverridePhantomParamsEvent";
    static constexpr const char* ALIAS = NAME;

    scn::OverridePhantomParamsEventParams params; // 58
};
RED4EXT_ASSERT_SIZE(OverridePhantomParamsEvent, 0x78);
} // namespace scn
using scnOverridePhantomParamsEvent = scn::OverridePhantomParamsEvent;
} // namespace RED4ext

// clang-format on
