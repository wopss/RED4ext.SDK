#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace ent { struct IComponent; }

namespace game::targeting
{
struct __declspec(align(0x10)) SystemTargetFilterResult : IScriptable
{
    static constexpr const char* NAME = "gametargetingSystemTargetFilterResult";
    static constexpr const char* ALIAS = "TargetFilterResult";

    ent::EntityID hitEntId; // 40
    WeakHandle<ent::IComponent> hitComponent; // 48
    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(SystemTargetFilterResult, 0x70);
} // namespace game::targeting
using gametargetingSystemTargetFilterResult = game::targeting::SystemTargetFilterResult;
using TargetFilterResult = game::targeting::SystemTargetFilterResult;
} // namespace RED4ext

// clang-format on
