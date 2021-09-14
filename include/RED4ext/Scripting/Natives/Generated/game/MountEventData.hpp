#pragma once

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

namespace game { 
struct MountEventData : IScriptable
{
    static constexpr const char* NAME = "gameMountEventData";
    static constexpr const char* ALIAS = "MountEventData";

    Transform initialTransformLS; // 40
    ent::EntityID mountParentEntityId; // 60
    CName slotName; // 68
    CName entryAnimName; // 70
    bool isInstant; // 78
    uint8_t unk79[0x88 - 0x79]; // 79
    bool setEntityVisibleWhenMountFinish; // 88
    bool removePitchRollRotationOnDismount; // 89
    bool ignoreHLS; // 8A
    uint8_t unk8B[0x90 - 0x8B]; // 8B
    Handle<game::MountEventOptions> mountEventOptions; // 90
};
RED4EXT_ASSERT_SIZE(MountEventData, 0xA0);
} // namespace game
using MountEventData = game::MountEventData;
} // namespace RED4ext
