#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IEntityStubHandlerProviderSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct EntityStubHandlerProviderSystem : AI::IEntityStubHandlerProviderSystem
{
    static constexpr const char* NAME = "AIEntityStubHandlerProviderSystem";
    static constexpr const char* ALIAS = "EntityStubHandlerProviderSystem";

    uint8_t unk48[0x160 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EntityStubHandlerProviderSystem, 0x160);
} // namespace AI
using AIEntityStubHandlerProviderSystem = AI::EntityStubHandlerProviderSystem;
using EntityStubHandlerProviderSystem = AI::EntityStubHandlerProviderSystem;
} // namespace RED4ext

// clang-format on
