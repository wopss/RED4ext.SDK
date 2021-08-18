#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world { 
struct EditorForceAutoHideDistance : ISerializable
{
    static constexpr const char* NAME = "worldEditorForceAutoHideDistance";
    static constexpr const char* ALIAS = NAME;

    float multiplier; // 30
    float minAutoHideDistance; // 34
};
RED4EXT_ASSERT_SIZE(EditorForceAutoHideDistance, 0x38);
} // namespace world
} // namespace RED4ext
