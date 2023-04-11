#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneEventId
{
    static constexpr const char* NAME = "scnSceneEventId";
    static constexpr const char* ALIAS = NAME;

    uint64_t id; // 00
};
RED4EXT_ASSERT_SIZE(SceneEventId, 0x8);
} // namespace scn
using scnSceneEventId = scn::SceneEventId;
} // namespace RED4ext

// clang-format on
