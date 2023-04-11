#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEventId.hpp>

namespace RED4ext
{
namespace scn { struct IScalingData; }

namespace scn
{
struct SceneEvent : ISerializable
{
    static constexpr const char* NAME = "scnSceneEvent";
    static constexpr const char* ALIAS = NAME;

    scn::SceneEventId id; // 30
    scn::EventType type; // 38
    uint32_t startTime; // 3C
    uint32_t duration; // 40
    uint8_t executionTagFlags; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    Handle<scn::IScalingData> scalingData; // 48
};
RED4EXT_ASSERT_SIZE(SceneEvent, 0x58);
} // namespace scn
using scnSceneEvent = scn::SceneEvent;
} // namespace RED4ext

// clang-format on
