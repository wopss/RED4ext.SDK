#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotItemAction.hpp>

namespace RED4ext
{
namespace work
{
struct UnequipFromSlotAction : work::IWorkspotItemAction
{
    static constexpr const char* NAME = "workUnequipFromSlotAction";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemSlot; // 30
};
RED4EXT_ASSERT_SIZE(UnequipFromSlotAction, 0x38);
} // namespace work
using workUnequipFromSlotAction = work::UnequipFromSlotAction;
} // namespace RED4ext

// clang-format on
