#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace work { 
struct WorkspotResourceComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "workWorkspotResourceComponent";
    static constexpr const char* ALIAS = "WorkspotResourceComponent";

    Ref<work::WorkspotResource> resource; // 120
    Ref<work::WorkspotResource> npcResource; // 138
    Ref<work::WorkspotResource> deviceResource; // 150
    CName syncSlotName; // 168
};
RED4EXT_ASSERT_SIZE(WorkspotResourceComponent, 0x170);
} // namespace work
using WorkspotResourceComponent = work::WorkspotResourceComponent;
} // namespace RED4ext
