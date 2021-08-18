#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn::loc { 
struct LangId
{
    static constexpr const char* NAME = "scnlocLangId";
    static constexpr const char* ALIAS = NAME;

    uint8_t langId; // 00
};
RED4EXT_ASSERT_SIZE(LangId, 0x1);
} // namespace scn::loc
} // namespace RED4ext
