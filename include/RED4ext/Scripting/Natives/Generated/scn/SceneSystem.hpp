#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ISceneSystem.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneSystem : scn::ISceneSystem
{
    static constexpr const char* NAME = "scnSceneSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xFF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SceneSystem, 0xFF0);
} // namespace scn
} // namespace RED4ext
