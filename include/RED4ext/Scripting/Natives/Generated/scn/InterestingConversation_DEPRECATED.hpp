#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct InterestingConversation_DEPRECATED
{
    static constexpr const char* NAME = "scnInterestingConversation_DEPRECATED";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFilename; // 00
};
RED4EXT_ASSERT_SIZE(InterestingConversation_DEPRECATED, 0x8);
} // namespace scn
using scnInterestingConversation_DEPRECATED = scn::InterestingConversation_DEPRECATED;
} // namespace RED4ext

// clang-format on
