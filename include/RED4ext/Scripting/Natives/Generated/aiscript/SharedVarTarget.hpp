#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarReferenceName.hpp>

namespace RED4ext
{
namespace aiscript
{
struct SharedVarTarget
{
    static constexpr const char* NAME = "aiscriptSharedVarTarget";
    static constexpr const char* ALIAS = "SharedVarTarget";

    uint8_t unk00[0x8 - 0x0]; // 0
    LibTreeSharedVarReferenceName varName; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarTarget, 0x10);
} // namespace aiscript
using aiscriptSharedVarTarget = aiscript::SharedVarTarget;
using SharedVarTarget = aiscript::SharedVarTarget;
} // namespace RED4ext

// clang-format on
