#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DeviceManager_ActionProperty.hpp>

namespace RED4ext
{
namespace quest
{
struct DeviceManager_NodeTypeParams : ISerializable
{
    static constexpr const char* NAME = "questDeviceManager_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 30
    CName slotName; // 38
    game::EntityReference entityRef; // 40
    CName deviceControllerClass; // 78
    CName deviceAction; // 80
    DynArray<quest::DeviceManager_ActionProperty> actionProperties; // 88
};
RED4EXT_ASSERT_SIZE(DeviceManager_NodeTypeParams, 0x98);
} // namespace quest
using questDeviceManager_NodeTypeParams = quest::DeviceManager_NodeTypeParams;
} // namespace RED4ext

// clang-format on
