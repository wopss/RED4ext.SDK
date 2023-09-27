#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/SyncBindBaseCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct DynamicSyncBindCommandData : work::SyncBindBaseCommandData
{
    static constexpr const char* NAME = "workDynamicSyncBindCommandData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID masterID; // 08
};
RED4EXT_ASSERT_SIZE(DynamicSyncBindCommandData, 0x10);
} // namespace work
using workDynamicSyncBindCommandData = work::DynamicSyncBindCommandData;
} // namespace RED4ext

// clang-format on
