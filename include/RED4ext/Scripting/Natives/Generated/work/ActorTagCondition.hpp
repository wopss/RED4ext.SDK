#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct ActorTagCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workActorTagCondition";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 38
};
RED4EXT_ASSERT_SIZE(ActorTagCondition, 0x40);
} // namespace work
using workActorTagCondition = work::ActorTagCondition;
} // namespace RED4ext

// clang-format on
