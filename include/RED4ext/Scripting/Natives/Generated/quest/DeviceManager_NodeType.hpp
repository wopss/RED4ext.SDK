#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { struct DeviceManager_NodeTypeParams; }

namespace quest
{
struct DeviceManager_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questDeviceManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<quest::DeviceManager_NodeTypeParams>> params; // 30
};
RED4EXT_ASSERT_SIZE(DeviceManager_NodeType, 0x40);
} // namespace quest
using questDeviceManager_NodeType = quest::DeviceManager_NodeType;
} // namespace RED4ext

// clang-format on
