#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterRandomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IndexedMorphName
{
    static constexpr const char* NAME = "gameuiIndexedMorphName";
    static constexpr const char* ALIAS = NAME;

    int32_t index; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName morphName; // 08
    CString localizedName; // 10
    red::TagList tags; // 30
    game::ui::CharacterRandomizationInfo randomizationInfo; // 40
};
RED4EXT_ASSERT_SIZE(IndexedMorphName, 0x48);
} // namespace game::ui
using gameuiIndexedMorphName = game::ui::IndexedMorphName;
} // namespace RED4ext

// clang-format on
