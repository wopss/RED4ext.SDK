#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SaveLockReason.hpp>

namespace RED4ext::game
{
struct SaveLock
{
    static constexpr const char* NAME = "gameSaveLock";
    static constexpr const char* ALIAS = NAME;

    SaveLockReason reason; // 00
    CString description;   // 04
};
RED4EXT_ASSERT_SIZE(SaveLock, 0x28);
} // namespace RED4ext::game
