#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerTimeProvider.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneTimeProvider : game::interactions::vis::IVisualizerTimeProvider
{
    static constexpr const char* NAME = "scnSceneTimeProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SceneTimeProvider, 0x50);
} // namespace scn
using scnSceneTimeProvider = scn::SceneTimeProvider;
} // namespace RED4ext

// clang-format on
