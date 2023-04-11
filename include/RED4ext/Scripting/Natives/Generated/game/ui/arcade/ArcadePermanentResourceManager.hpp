#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadePermanentResourceManager : ISerializable
{
    static constexpr const char* NAME = "gameuiarcadeArcadePermanentResourceManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x78 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(ArcadePermanentResourceManager, 0x78);
} // namespace game::ui::arcade
using gameuiarcadeArcadePermanentResourceManager = game::ui::arcade::ArcadePermanentResourceManager;
} // namespace RED4ext

// clang-format on
