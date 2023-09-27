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
struct SyncBindBaseCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workSyncBindBaseCommandData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SyncBindBaseCommandData, 0x8);
} // namespace work
using workSyncBindBaseCommandData = work::SyncBindBaseCommandData;
} // namespace RED4ext

// clang-format on
