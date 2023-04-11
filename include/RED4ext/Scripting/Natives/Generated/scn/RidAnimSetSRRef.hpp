#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SRRefId.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimSetSRRef
{
    static constexpr const char* NAME = "scnRidAnimSetSRRef";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::SRRefId> animations; // 00
};
RED4EXT_ASSERT_SIZE(RidAnimSetSRRef, 0x10);
} // namespace scn
using scnRidAnimSetSRRef = scn::RidAnimSetSRRef;
} // namespace RED4ext

// clang-format on
