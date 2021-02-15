#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/game/ActionPrereqs.hpp>
#include <RED4ext/Types/generated/game/device/RequestType.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::device { struct Clearance; }

namespace game { 
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
    bool ignoresRPG; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(GetActionsContext, 0x50);
} // namespace game
using GetActionsContext = game::GetActionsContext;
} // namespace RED4ext
