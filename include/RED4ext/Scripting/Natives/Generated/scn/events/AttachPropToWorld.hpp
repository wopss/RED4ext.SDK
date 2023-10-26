#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OffsetMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/AttachPropToWorldFallbackData.hpp>

namespace RED4ext
{
namespace scn::events
{
struct __declspec(align(0x10)) AttachPropToWorld : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsAttachPropToWorld";
    static constexpr const char* ALIAS = NAME;

    scn::PropId propId; // 58
    scn::OffsetMode offsetMode; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    Vector3 customOffsetPos; // 60
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    Quaternion customOffsetRot; // 70
    scn::PerformerId referencePerformer; // 80
    TweakDBID referencePerformerSlotId; // 84
    TweakDBID referencePerformerItemId; // 8C
    uint8_t unk94[0x98 - 0x94]; // 94
    DynArray<scn::events::AttachPropToWorldFallbackData> fallbackData; // 98
    uint8_t unkA8[0xB0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(AttachPropToWorld, 0xB0);
} // namespace scn::events
using scneventsAttachPropToWorld = scn::events::AttachPropToWorld;
} // namespace RED4ext

// clang-format on
