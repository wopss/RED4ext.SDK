#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn::loc { 
struct VariantId
{
    static constexpr const char* NAME = "scnlocVariantId";
    static constexpr const char* ALIAS = NAME;

    CRUID ruid; // 00
};
RED4EXT_ASSERT_SIZE(VariantId, 0x8);
} // namespace scn::loc
} // namespace RED4ext
