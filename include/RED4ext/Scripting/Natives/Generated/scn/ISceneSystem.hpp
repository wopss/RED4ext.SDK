#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ISceneSystem.hpp>

namespace RED4ext
{
namespace scn
{
struct ISceneSystem : game::ISceneSystem
{
    static constexpr const char* NAME = "scnISceneSystem";
    static constexpr const char* ALIAS = "SceneSystem";

};
RED4EXT_ASSERT_SIZE(ISceneSystem, 0x48);
} // namespace scn
using scnISceneSystem = scn::ISceneSystem;
using SceneSystem = scn::ISceneSystem;
} // namespace RED4ext

// clang-format on
