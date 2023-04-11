#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsLookAtParams.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsBasicLookAtParams : scn::ChoiceNodeNsLookAtParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsBasicLookAtParams";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 30
    Vector3 offset; // 38
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsBasicLookAtParams, 0x48);
} // namespace scn
using scnChoiceNodeNsBasicLookAtParams = scn::ChoiceNodeNsBasicLookAtParams;
} // namespace RED4ext

// clang-format on
