#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct ItemOverrideCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workItemOverrideCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x28 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(ItemOverrideCommandData, 0x28);
} // namespace work
using workItemOverrideCommandData = work::ItemOverrideCommandData;
} // namespace RED4ext

// clang-format on
