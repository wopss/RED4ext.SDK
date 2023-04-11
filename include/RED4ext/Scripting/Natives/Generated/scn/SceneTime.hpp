#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneTime
{
    static constexpr const char* NAME = "scnSceneTime";
    static constexpr const char* ALIAS = NAME;

    uint32_t stu; // 00
};
RED4EXT_ASSERT_SIZE(SceneTime, 0x4);
} // namespace scn
using scnSceneTime = scn::SceneTime;
} // namespace RED4ext

// clang-format on
