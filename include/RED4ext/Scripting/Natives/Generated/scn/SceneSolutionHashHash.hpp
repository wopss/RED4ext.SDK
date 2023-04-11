#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneSolutionHashHash
{
    static constexpr const char* NAME = "scnSceneSolutionHashHash";
    static constexpr const char* ALIAS = NAME;

    uint64_t sceneSolutionHashDate; // 00
};
RED4EXT_ASSERT_SIZE(SceneSolutionHashHash, 0x8);
} // namespace scn
using scnSceneSolutionHashHash = scn::SceneSolutionHashHash;
} // namespace RED4ext

// clang-format on
