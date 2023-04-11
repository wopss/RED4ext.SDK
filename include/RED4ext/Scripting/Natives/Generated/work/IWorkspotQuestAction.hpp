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
struct IWorkspotQuestAction : ISerializable
{
    static constexpr const char* NAME = "workIWorkspotQuestAction";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IWorkspotQuestAction, 0x30);
} // namespace work
using workIWorkspotQuestAction = work::IWorkspotQuestAction;
} // namespace RED4ext

// clang-format on
