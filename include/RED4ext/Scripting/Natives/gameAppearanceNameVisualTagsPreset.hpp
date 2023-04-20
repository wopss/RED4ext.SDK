#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AppearanceNameVisualTagsPreset_Entity.hpp>

namespace RED4ext::game
{
struct AppearanceNameVisualTagsPreset : ISerializable
{
    static constexpr const char* NAME = "gameAppearanceNameVisualTagsPreset";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::AppearanceNameVisualTagsPreset_Entity> presets;       // 30
    HashMap<ResourcePath, AppearanceNameVisualTagsPreset_Entity> lookup; // 40
};
RED4EXT_ASSERT_SIZE(AppearanceNameVisualTagsPreset, 0x70);
} // namespace RED4ext::game
