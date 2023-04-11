#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct AddIdleWithBlendAnimEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnAddIdleWithBlendAnimEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName actorComponent; // 60
    float targetWeight; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(AddIdleWithBlendAnimEvent, 0x70);
} // namespace scn
using scnAddIdleWithBlendAnimEvent = scn::AddIdleWithBlendAnimEvent;
} // namespace RED4ext

// clang-format on
