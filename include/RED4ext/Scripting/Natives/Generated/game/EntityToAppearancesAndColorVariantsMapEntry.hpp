#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityAppearanceColorVariantsArray.hpp>

namespace RED4ext
{
namespace game
{
struct EntityToAppearancesAndColorVariantsMapEntry : ISerializable
{
    static constexpr const char* NAME = "gameEntityToAppearancesAndColorVariantsMapEntry";
    static constexpr const char* ALIAS = NAME;

    uint64_t entityPathHash; // 30
    CString debugEntityPath; // 38
    DynArray<game::EntityAppearanceColorVariantsArray> appearancesAndTheirColorVariants; // 58
};
RED4EXT_ASSERT_SIZE(EntityToAppearancesAndColorVariantsMapEntry, 0x68);
} // namespace game
using gameEntityToAppearancesAndColorVariantsMapEntry = game::EntityToAppearancesAndColorVariantsMapEntry;
} // namespace RED4ext

// clang-format on
