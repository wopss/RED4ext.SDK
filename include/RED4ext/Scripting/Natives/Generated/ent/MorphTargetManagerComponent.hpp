#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ExternalComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct MorphTargetManagerComponent : ent::ExternalComponent
{
    static constexpr const char* NAME = "entMorphTargetManagerComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0x110 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(MorphTargetManagerComponent, 0x110);
} // namespace ent
} // namespace RED4ext
