#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotItemAction.hpp>

namespace RED4ext
{
namespace work
{
struct UnequipPropAction : work::IWorkspotItemAction
{
    static constexpr const char* NAME = "workUnequipPropAction";
    static constexpr const char* ALIAS = NAME;

    CName itemId; // 30
};
RED4EXT_ASSERT_SIZE(UnequipPropAction, 0x38);
} // namespace work
using workUnequipPropAction = work::UnequipPropAction;
} // namespace RED4ext

// clang-format on
