#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace scn
{
struct IsAliveListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "scnIsAliveListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IsAliveListener, 0x50);
} // namespace scn
using scnIsAliveListener = scn::IsAliveListener;
} // namespace RED4ext

// clang-format on
