#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn::loc
{
struct Signature
{
    static constexpr const char* NAME = "scnlocSignature";
    static constexpr const char* ALIAS = NAME;

    uint64_t val; // 00
};
RED4EXT_ASSERT_SIZE(Signature, 0x8);
} // namespace scn::loc
using scnlocSignature = scn::loc::Signature;
} // namespace RED4ext

// clang-format on
