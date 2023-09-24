#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work { struct IEntry; }

namespace work
{
struct IContainerEntry : work::IEntry
{
    static constexpr const char* NAME = "workIContainerEntry";
    static constexpr const char* ALIAS = NAME;

    bool disableAutoTransition; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName idleAnim; // 40
    DynArray<Handle<work::IEntry>> list; // 48
};
RED4EXT_ASSERT_SIZE(IContainerEntry, 0x58);
} // namespace work
using workIContainerEntry = work::IContainerEntry;
} // namespace RED4ext

// clang-format on
