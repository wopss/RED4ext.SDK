#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionPrereqs.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/device/RequestType.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::device { struct Clearance; }

namespace game
{
struct GetActionsContext
{
    static constexpr const char* NAME = "gameGetActionsContext";
    static constexpr const char* ALIAS = "GetActionsContext";

    Handle<game::device::Clearance> clearance; // 00
    ent::EntityID requestorID; // 10
    game::device::RequestType requestType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    DynArray<game::ActionPrereqs> actionPrereqs; // 20
    CName interactionLayerTag; // 30
    WeakHandle<game::Object> processInitiatorObject; // 38
    bool ignoresAuthorization; // 48
    bool allowsRemoteAuthorization; // 49
    bool ignoresRPG; // 4A
    uint8_t unk4B[0x50 - 0x4B]; // 4B
};
RED4EXT_ASSERT_SIZE(GetActionsContext, 0x50);
} // namespace game
using gameGetActionsContext = game::GetActionsContext;
using GetActionsContext = game::GetActionsContext;
} // namespace RED4ext

// clang-format on
