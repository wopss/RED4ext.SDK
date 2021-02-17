#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/effect/BoneEntry.hpp>
#include <RED4ext/Types/generated/effect/IPlacementEntries.hpp>

namespace RED4ext
{
namespace effect { 
struct BoneEntries : effect::IPlacementEntries
{
    static constexpr const char* NAME = "effectBoneEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<effect::BoneEntry> bones; // 30
    bool inheritRotation; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(BoneEntries, 0x48);
} // namespace effect
} // namespace RED4ext
