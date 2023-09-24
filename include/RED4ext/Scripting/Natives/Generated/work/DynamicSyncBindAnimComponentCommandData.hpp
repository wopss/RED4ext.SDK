#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/SyncBindBaseCommandData.hpp>

namespace RED4ext
{
namespace ent { struct AnimationControllerComponent; }

namespace work
{
struct DynamicSyncBindAnimComponentCommandData : work::SyncBindBaseCommandData
{
    static constexpr const char* NAME = "workDynamicSyncBindAnimComponentCommandData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::AnimationControllerComponent> slave; // 08
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(DynamicSyncBindAnimComponentCommandData, 0x20);
} // namespace work
using workDynamicSyncBindAnimComponentCommandData = work::DynamicSyncBindAnimComponentCommandData;
} // namespace RED4ext

// clang-format on
