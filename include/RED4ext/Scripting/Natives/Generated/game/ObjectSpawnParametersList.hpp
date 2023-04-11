#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectSpawnParameter.hpp>

namespace RED4ext
{
namespace game { struct ObjectSpawnParameter; }

namespace game
{
struct ObjectSpawnParametersList : game::ObjectSpawnParameter
{
    static constexpr const char* NAME = "gameObjectSpawnParametersList";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::ObjectSpawnParameter>> parameterList; // 30
};
RED4EXT_ASSERT_SIZE(ObjectSpawnParametersList, 0x40);
} // namespace game
using gameObjectSpawnParametersList = game::ObjectSpawnParametersList;
} // namespace RED4ext

// clang-format on
