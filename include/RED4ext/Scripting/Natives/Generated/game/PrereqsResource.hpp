#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqsResource : CResource
{
    static constexpr const char* NAME = "gamePrereqsResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::PrereqDefinition> prereqs; // 40
};
RED4EXT_ASSERT_SIZE(PrereqsResource, 0x50);
} // namespace game
using gamePrereqsResource = game::PrereqsResource;
} // namespace RED4ext

// clang-format on
