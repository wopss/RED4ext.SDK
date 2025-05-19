#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn::screenplay {
enum class ItemType : int8_t
{
    invalid = 0,
    dialogLine = 1,
    choiceOption = 2,
    standaloneComment = 3,
};
} // namespace scn::screenplay
using scnscreenplayItemType = scn::screenplay::ItemType;
} // namespace RED4ext

// clang-format on
