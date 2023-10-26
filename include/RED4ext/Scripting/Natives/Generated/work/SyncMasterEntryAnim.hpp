#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/EntryAnim.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) SyncMasterEntryAnim : work::EntryAnim
{
    static constexpr const char* NAME = "workSyncMasterEntryAnim";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SyncMasterEntryAnim, 0x90);
} // namespace work
using workSyncMasterEntryAnim = work::SyncMasterEntryAnim;
} // namespace RED4ext

// clang-format on
