#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace interop
{
struct TransformInfo
{
    static constexpr const char* NAME = "interopTransformInfo";
    static constexpr const char* ALIAS = NAME;

    Vector3 translation; // 00
    EulerAngles rotation; // 0C
};
RED4EXT_ASSERT_SIZE(TransformInfo, 0x18);
} // namespace interop
using interopTransformInfo = interop::TransformInfo;
} // namespace RED4ext

// clang-format on
