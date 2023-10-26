#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotItemAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/PropAttachMethod.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) EquipPropToSlotAction : work::IWorkspotItemAction
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
using workEquipPropToSlotAction = work::EquipPropToSlotAction;
} // namespace RED4ext

// clang-format on
