#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ink/VideoSequenceEntry.hpp>
#include <RED4ext/Types/generated/ink/VideoWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct VideoSequenceController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkVideoSequenceController";
    static constexpr const char* ALIAS = NAME;

    ink::VideoWidgetReference videoWidget; // 68
    DynArray<ink::VideoSequenceEntry> videoSequence; // 80
    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(VideoSequenceController, 0x98);
} // namespace ink
} // namespace RED4ext
