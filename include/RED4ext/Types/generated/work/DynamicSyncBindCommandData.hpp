#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work { 
struct DynamicSyncBindCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workDynamicSyncBindCommandData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID masterID; // 08
};
RED4EXT_ASSERT_SIZE(DynamicSyncBindCommandData, 0x10);
} // namespace work
} // namespace RED4ext
