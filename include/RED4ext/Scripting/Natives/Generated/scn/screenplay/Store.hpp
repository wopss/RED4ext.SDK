#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ChoiceOption.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/DialogLine.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct Store
{
    static constexpr const char* NAME = "scnscreenplayStore";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::screenplay::DialogLine> lines; // 00
    DynArray<scn::screenplay::ChoiceOption> options; // 10
};
RED4EXT_ASSERT_SIZE(Store, 0x20);
} // namespace scn::screenplay
using scnscreenplayStore = scn::screenplay::Store;
} // namespace RED4ext

// clang-format on
