#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace work
{
struct __declspec(align(0x10)) WorkspotResourceComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "workWorkspotResourceComponent";
    static constexpr const char* ALIAS = "WorkspotResourceComponent";

    RaRef<work::WorkspotResource> workspotResource; // 120
    uint8_t unk128[0x140 - 0x128]; // 128
    Ref<work::WorkspotResource> npcWorkspotResourceSync; // 140
    Ref<work::WorkspotResource> deviceWorkspotResourceSync; // 158
    CName syncSlotName; // 170
    uint8_t unk178[0x180 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(WorkspotResourceComponent, 0x180);
} // namespace work
using workWorkspotResourceComponent = work::WorkspotResourceComponent;
using WorkspotResourceComponent = work::WorkspotResourceComponent;
} // namespace RED4ext

// clang-format on
