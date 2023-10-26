#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ISceneSystem.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) SceneSystem : scn::ISceneSystem
{
    static constexpr const char* NAME = "scnSceneSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x10D0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SceneSystem, 0x10D0);
} // namespace scn
using scnSceneSystem = scn::SceneSystem;
} // namespace RED4ext

// clang-format on
