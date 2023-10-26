#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct __declspec(align(0x10)) AttachPropToNode : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsAttachPropToNode";
    static constexpr const char* ALIAS = NAME;

    scn::PropId propId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    NodeRef nodeRef; // 60
    Vector3 customOffsetPos; // 68
    uint8_t unk74[0x80 - 0x74]; // 74
    Quaternion customOffsetRot; // 80
};
RED4EXT_ASSERT_SIZE(AttachPropToNode, 0x90);
} // namespace scn::events
using scneventsAttachPropToNode = scn::events::AttachPropToNode;
} // namespace RED4ext

// clang-format on
