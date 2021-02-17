#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/work/IWorkspotItemAction.hpp>
#include <RED4ext/Types/generated/work/PropAttachMethod.hpp>

namespace RED4ext
{
namespace work { 
struct EquipPropToSlotAction : work::IWorkspotItemAction
{
    static constexpr const char* NAME = "workEquipPropToSlotAction";
    static constexpr const char* ALIAS = NAME;

    CName itemId; // 30
    TweakDBID itemSlot; // 38
    work::PropAttachMethod attachMethod; // 40
    Vector3 customOffsetPos; // 44
    Quaternion customOffsetRot; // 50
};
RED4EXT_ASSERT_SIZE(EquipPropToSlotAction, 0x60);
} // namespace work
} // namespace RED4ext
