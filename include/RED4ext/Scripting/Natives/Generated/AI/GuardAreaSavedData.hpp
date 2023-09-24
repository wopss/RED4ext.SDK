#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace AI
{
struct GuardAreaSavedData
{
    static constexpr const char* NAME = "AIGuardAreaSavedData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID puppetId; // 00
    NodeRef nodeRef; // 08
};
RED4EXT_ASSERT_SIZE(GuardAreaSavedData, 0x10);
} // namespace AI
using AIGuardAreaSavedData = AI::GuardAreaSavedData;
} // namespace RED4ext

// clang-format on
