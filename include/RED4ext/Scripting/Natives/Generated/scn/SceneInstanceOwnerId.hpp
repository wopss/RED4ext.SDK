#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneInstanceOwnerId
{
    static constexpr const char* NAME = "scnSceneInstanceOwnerId";
    static constexpr const char* ALIAS = NAME;

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(SceneInstanceOwnerId, 0x8);
} // namespace scn
} // namespace RED4ext
