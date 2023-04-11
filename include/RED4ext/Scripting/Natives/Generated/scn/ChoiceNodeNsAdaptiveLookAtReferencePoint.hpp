#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ReferencePointId.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsAdaptiveLookAtReferencePoint
{
    static constexpr const char* NAME = "scnChoiceNodeNsAdaptiveLookAtReferencePoint";
    static constexpr const char* ALIAS = NAME;

    scn::ReferencePointId referencePoint; // 00
    float constantWeight; // 04
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAdaptiveLookAtReferencePoint, 0x8);
} // namespace scn
using scnChoiceNodeNsAdaptiveLookAtReferencePoint = scn::ChoiceNodeNsAdaptiveLookAtReferencePoint;
} // namespace RED4ext

// clang-format on
