#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IndexedMorphName.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MorphInfo : game::ui::CharacterCustomizationInfo
{
    static constexpr const char* NAME = "gameuiMorphInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::IndexedMorphName> morphNames; // B8
};
RED4EXT_ASSERT_SIZE(MorphInfo, 0xC8);
} // namespace game::ui
} // namespace RED4ext
