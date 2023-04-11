#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/AnimClip.hpp>

namespace RED4ext
{
namespace work { struct IWorkspotItemAction; }

namespace work
{
struct AnimClipWithItem : work::AnimClip
{
    static constexpr const char* NAME = "workAnimClipWithItem";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<work::IWorkspotItemAction>> itemActions; // 48
};
RED4EXT_ASSERT_SIZE(AnimClipWithItem, 0x58);
} // namespace work
using workAnimClipWithItem = work::AnimClipWithItem;
} // namespace RED4ext

// clang-format on
