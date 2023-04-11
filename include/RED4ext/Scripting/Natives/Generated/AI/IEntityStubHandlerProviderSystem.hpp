#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct IEntityStubHandlerProviderSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIIEntityStubHandlerProviderSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IEntityStubHandlerProviderSystem, 0x48);
} // namespace AI
using AIIEntityStubHandlerProviderSystem = AI::IEntityStubHandlerProviderSystem;
} // namespace RED4ext

// clang-format on
