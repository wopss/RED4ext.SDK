#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeColliderType.hpp>

namespace RED4ext
{
namespace game::ui::arcade { struct BoundingShape; }

namespace game::ui::arcade
{
struct ArcadeColliderData
{
    static constexpr const char* NAME = "gameuiarcadeArcadeColliderData";
    static constexpr const char* ALIAS = NAME;

    game::ui::arcade::ArcadeColliderType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<game::ui::arcade::BoundingShape> shape; // 08
};
RED4EXT_ASSERT_SIZE(ArcadeColliderData, 0x18);
} // namespace game::ui::arcade
using gameuiarcadeArcadeColliderData = game::ui::arcade::ArcadeColliderData;
} // namespace RED4ext

// clang-format on
