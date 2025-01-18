#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ExternalComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MorphTargetWeightEntry.hpp>
#include <cstdint>

namespace RED4ext
{
namespace ent
{
struct MorphTargetManagerComponent : ent::ExternalComponent
{
    static constexpr const char* NAME = "entMorphTargetManagerComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<MorphTargetWeightEntry> weightEntries;
    uint8_t unk98[0x110 - 0xa8]; // 98
};
RED4EXT_ASSERT_SIZE(MorphTargetManagerComponent, 0x110);
} // namespace ent
using entMorphTargetManagerComponent = ent::MorphTargetManagerComponent;
} // namespace RED4ext
