#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace work
{
struct IWorkspotItemAction : ISerializable
{
    static constexpr const char* NAME = "workIWorkspotItemAction";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IWorkspotItemAction, 0x30);
} // namespace work
using workIWorkspotItemAction = work::IWorkspotItemAction;
} // namespace RED4ext

// clang-format on
