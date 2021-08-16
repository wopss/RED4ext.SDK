#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisualTagsAppearanceNamesPreset_Entity.hpp>

namespace RED4ext
{
namespace game { 
struct VisualTagsAppearanceNamesPreset : ISerializable
{
    static constexpr const char* NAME = "gameVisualTagsAppearanceNamesPreset";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::VisualTagsAppearanceNamesPreset_Entity> presets; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisualTagsAppearanceNamesPreset, 0x70);
} // namespace game
} // namespace RED4ext
