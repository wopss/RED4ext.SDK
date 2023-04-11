#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceHubPartId
{
    static constexpr const char* NAME = "scnChoiceHubPartId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(ChoiceHubPartId, 0x4);
} // namespace scn
using scnChoiceHubPartId = scn::ChoiceHubPartId;
} // namespace RED4ext

// clang-format on
