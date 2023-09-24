#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/UniqueItemData.hpp>

namespace RED4ext
{
namespace game
{
struct PreviewItemData : game::UniqueItemData
{
    static constexpr const char* NAME = "gamePreviewItemData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PreviewItemData, 0x100);
} // namespace game
using gamePreviewItemData = game::PreviewItemData;
} // namespace RED4ext

// clang-format on
