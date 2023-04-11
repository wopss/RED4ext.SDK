#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdCreationData.hpp>

namespace RED4ext
{
namespace game
{
struct CrowdCreationDataRegistry : ISerializable
{
    static constexpr const char* NAME = "gameCrowdCreationDataRegistry";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CrowdCreationData> creationData; // 30
};
RED4EXT_ASSERT_SIZE(CrowdCreationDataRegistry, 0x40);
} // namespace game
using gameCrowdCreationDataRegistry = game::CrowdCreationDataRegistry;
} // namespace RED4ext

// clang-format on
