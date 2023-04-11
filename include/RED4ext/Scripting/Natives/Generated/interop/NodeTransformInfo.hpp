#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/StringWithID.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/TransformInfo.hpp>

namespace RED4ext
{
namespace interop
{
struct NodeTransformInfo
{
    static constexpr const char* NAME = "interopNodeTransformInfo";
    static constexpr const char* ALIAS = NAME;

    interop::StringWithID id; // 00
    interop::TransformInfo transformInfo; // 28
};
RED4EXT_ASSERT_SIZE(NodeTransformInfo, 0x40);
} // namespace interop
using interopNodeTransformInfo = interop::NodeTransformInfo;
} // namespace RED4ext

// clang-format on
