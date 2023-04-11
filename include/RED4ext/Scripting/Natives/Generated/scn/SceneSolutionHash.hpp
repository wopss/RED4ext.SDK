#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneSolutionHashHash.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneSolutionHash
{
    static constexpr const char* NAME = "scnSceneSolutionHash";
    static constexpr const char* ALIAS = NAME;

    scn::SceneSolutionHashHash sceneSolutionHash; // 00
};
RED4EXT_ASSERT_SIZE(SceneSolutionHash, 0x8);
} // namespace scn
using scnSceneSolutionHash = scn::SceneSolutionHash;
} // namespace RED4ext

// clang-format on
