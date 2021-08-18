#pragma once

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

namespace work { 
struct IContainerEntry : work::IEntry
{
    static constexpr const char* NAME = "workIContainerEntry";
    static constexpr const char* ALIAS = NAME;

    CName idleAnim; // 38
    DynArray<Handle<work::IEntry>> list; // 40
};
RED4EXT_ASSERT_SIZE(IContainerEntry, 0x50);
} // namespace work
} // namespace RED4ext
