#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace scn
{
struct IBraindanceConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "scnIBraindanceConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IBraindanceConditionType, 0x38);
} // namespace scn
using scnIBraindanceConditionType = scn::IBraindanceConditionType;
} // namespace RED4ext

// clang-format on
