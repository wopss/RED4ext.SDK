#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DefaultAppearancePreset_Entity.hpp>

namespace RED4ext
{
namespace game { 
struct EntityTemplateDefaultAppearancePreset : ISerializable
{
    static constexpr const char* NAME = "gameEntityTemplateDefaultAppearancePreset";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::DefaultAppearancePreset_Entity> defaultAppearancePresets; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EntityTemplateDefaultAppearancePreset, 0x70);
} // namespace game
} // namespace RED4ext
