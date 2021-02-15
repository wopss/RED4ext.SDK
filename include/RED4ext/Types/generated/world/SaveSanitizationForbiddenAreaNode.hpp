#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct SaveSanitizationForbiddenAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldSaveSanitizationForbiddenAreaNode";
    static constexpr const char* ALIAS = NAME;

    Vector4 safeSpotOffset; // 70
};
RED4EXT_ASSERT_SIZE(SaveSanitizationForbiddenAreaNode, 0x80);
} // namespace world
} // namespace RED4ext
