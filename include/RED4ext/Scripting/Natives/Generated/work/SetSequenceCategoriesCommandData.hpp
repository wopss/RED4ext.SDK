#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CategorySelectionProbability.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct SetSequenceCategoriesCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workSetSequenceCategoriesCommandData";
    static constexpr const char* ALIAS = NAME;

    game::CategorySelectionProbability sequenceCategories; // 08
};
RED4EXT_ASSERT_SIZE(SetSequenceCategoriesCommandData, 0x18);
} // namespace work
using workSetSequenceCategoriesCommandData = work::SetSequenceCategoriesCommandData;
} // namespace RED4ext

// clang-format on
