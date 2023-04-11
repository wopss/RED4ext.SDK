#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace sense
{
struct ISenseManager : game::IGameSystem
{
    static constexpr const char* NAME = "senseISenseManager";
    static constexpr const char* ALIAS = "ISenseManager";

};
RED4EXT_ASSERT_SIZE(ISenseManager, 0x48);
} // namespace sense
using senseISenseManager = sense::ISenseManager;
using ISenseManager = sense::ISenseManager;
} // namespace RED4ext

// clang-format on
