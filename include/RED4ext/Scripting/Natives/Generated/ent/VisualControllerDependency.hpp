#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct VisualControllerDependency
{
    static constexpr const char* NAME = "entVisualControllerDependency";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> mesh; // 00
    CName appearanceName; // 08
    CName componentName; // 10
};
RED4EXT_ASSERT_SIZE(VisualControllerDependency, 0x18);
} // namespace ent
using entVisualControllerDependency = ent::VisualControllerDependency;
} // namespace RED4ext

// clang-format on
