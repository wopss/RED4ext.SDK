#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsDeprecatedParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsDeprecatedParams";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    scn::PropId propId; // 04
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsDeprecatedParams, 0x8);
} // namespace scn
using scnChoiceNodeNsDeprecatedParams = scn::ChoiceNodeNsDeprecatedParams;
} // namespace RED4ext

// clang-format on
