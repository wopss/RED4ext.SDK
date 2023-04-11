#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsLookAtParams : ISerializable
{
    static constexpr const char* NAME = "scnChoiceNodeNsLookAtParams";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsLookAtParams, 0x30);
} // namespace scn
using scnChoiceNodeNsLookAtParams = scn::ChoiceNodeNsLookAtParams;
} // namespace RED4ext

// clang-format on
