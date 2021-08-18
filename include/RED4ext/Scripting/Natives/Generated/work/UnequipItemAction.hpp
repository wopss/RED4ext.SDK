#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotItemAction.hpp>

namespace RED4ext
{
namespace work { 
struct UnequipItemAction : work::IWorkspotItemAction
{
    static constexpr const char* NAME = "workUnequipItemAction";
    static constexpr const char* ALIAS = NAME;

    TweakDBID item; // 30
};
RED4EXT_ASSERT_SIZE(UnequipItemAction, 0x38);
} // namespace work
} // namespace RED4ext
