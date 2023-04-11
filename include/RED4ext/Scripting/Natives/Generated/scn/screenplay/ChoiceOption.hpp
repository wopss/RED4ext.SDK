#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocstringId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/OptionUsage.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct ChoiceOption
{
    static constexpr const char* NAME = "scnscreenplayChoiceOption";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId itemId; // 00
    scn::screenplay::OptionUsage usage; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    scn::loc::LocstringId locstringId; // 08
};
RED4EXT_ASSERT_SIZE(ChoiceOption, 0x10);
} // namespace scn::screenplay
using scnscreenplayChoiceOption = scn::screenplay::ChoiceOption;
} // namespace RED4ext

// clang-format on
