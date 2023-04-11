#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VideoSequenceEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VideoWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct VideoSequenceController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkVideoSequenceController";
    static constexpr const char* ALIAS = NAME;

    ink::VideoWidgetReference videoWidget; // 78
    DynArray<ink::VideoSequenceEntry> videoSequence; // 90
    uint8_t unkA0[0xA8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(VideoSequenceController, 0xA8);
} // namespace ink
using inkVideoSequenceController = ink::VideoSequenceController;
} // namespace RED4ext

// clang-format on
