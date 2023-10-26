#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game { struct MountEventOptions; }

namespace game
{
struct __declspec(align(0x10)) MountEventData : IScriptable
{
    static constexpr const char* NAME = "gameMountEventData";
    static constexpr const char* ALIAS = "MountEventData";

    Transform initialTransformLS; // 40
    ent::EntityID mountParentEntityId; // 60
    CName slotName; // 68
    CName entryAnimName; // 70
    bool isInstant; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CName entrySlotName; // 80
    bool setEntityVisibleWhenMountFinish; // 88
    bool removePitchRollRotationOnDismount; // 89
    bool ignoreHLS; // 8A
    bool switchRenderPlane; // 8B
    bool isJustAttached; // 8C
    bool isCarrying; // 8D
    bool allowFailsafeTeleport; // 8E
    uint8_t unk8F[0x90 - 0x8F]; // 8F
    Handle<game::MountEventOptions> mountEventOptions; // 90
};
RED4EXT_ASSERT_SIZE(MountEventData, 0xA0);
} // namespace game
using gameMountEventData = game::MountEventData;
using MountEventData = game::MountEventData;
} // namespace RED4ext

// clang-format on
