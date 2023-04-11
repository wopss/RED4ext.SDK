#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace work
{
struct WorkspotGlobalProp
{
    static constexpr const char* NAME = "workWorkspotGlobalProp";
    static constexpr const char* ALIAS = NAME;

    CName id; // 00
    CName boneName; // 08
    RaRef<ent::EntityTemplate> prop; // 10
};
RED4EXT_ASSERT_SIZE(WorkspotGlobalProp, 0x18);
} // namespace work
using workWorkspotGlobalProp = work::WorkspotGlobalProp;
} // namespace RED4ext

// clang-format on
