#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseCorrectionGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) PoseCorrectionEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnPoseCorrectionEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    anim::PoseCorrectionGroup poseCorrectionGroup; // 60
};
RED4EXT_ASSERT_SIZE(PoseCorrectionEvent, 0x2D0);
} // namespace scn
using scnPoseCorrectionEvent = scn::PoseCorrectionEvent;
} // namespace RED4ext

// clang-format on
