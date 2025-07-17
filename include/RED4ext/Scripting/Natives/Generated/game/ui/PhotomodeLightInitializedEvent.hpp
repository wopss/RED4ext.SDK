#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::ui
{
struct PhotomodeLightInitializedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeLightInitializedEvent";
    static constexpr const char* ALIAS = "PhotomodeLightInitializedEvent";

    WeakHandle<ent::Entity> light; // 40
};
RED4EXT_ASSERT_SIZE(PhotomodeLightInitializedEvent, 0x50);
} // namespace game::ui
using gameuiPhotomodeLightInitializedEvent = game::ui::PhotomodeLightInitializedEvent;
using PhotomodeLightInitializedEvent = game::ui::PhotomodeLightInitializedEvent;
} // namespace RED4ext

// clang-format on
