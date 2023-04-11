#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle
{
struct PortalsList : IScriptable
{
    static constexpr const char* NAME = "vehiclePortalsList";
    static constexpr const char* ALIAS = NAME;

    DynArray<NodeRef> listPoints; // 40
};
RED4EXT_ASSERT_SIZE(PortalsList, 0x50);
} // namespace vehicle
using vehiclePortalsList = vehicle::PortalsList;
} // namespace RED4ext

// clang-format on
