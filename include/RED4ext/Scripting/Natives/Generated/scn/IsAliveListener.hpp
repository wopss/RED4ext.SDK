#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace scn { 
struct IsAliveListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "scnIsAliveListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IsAliveListener, 0x48);
} // namespace scn
} // namespace RED4ext
