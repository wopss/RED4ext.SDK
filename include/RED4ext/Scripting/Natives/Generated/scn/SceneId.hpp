#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneId
{
    static constexpr const char* NAME = "scnSceneId";
    static constexpr const char* ALIAS = NAME;

    uint64_t resPathHash; // 00
};
RED4EXT_ASSERT_SIZE(SceneId, 0x8);
} // namespace scn
using scnSceneId = scn::SceneId;
} // namespace RED4ext

// clang-format on
