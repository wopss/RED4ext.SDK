#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EBraindanceLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EClueDescriptorMode.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BraindanceClueDescriptor
{
    static constexpr const char* NAME = "gameuiBraindanceClueDescriptor";
    static constexpr const char* ALIAS = "BraindanceClueDescriptor";

    game::ui::EClueDescriptorMode mode; // 00
    float startTime; // 04
    float endTime; // 08
    game::ui::EBraindanceLayer layer; // 0C
    CName clueName; // 10
};
RED4EXT_ASSERT_SIZE(BraindanceClueDescriptor, 0x18);
} // namespace game::ui
using gameuiBraindanceClueDescriptor = game::ui::BraindanceClueDescriptor;
using BraindanceClueDescriptor = game::ui::BraindanceClueDescriptor;
} // namespace RED4ext

// clang-format on
