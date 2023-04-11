#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIRingType.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct SelectedCoversData : IScriptable
{
    static constexpr const char* NAME = "AIbehaviorSelectedCoversData";
    static constexpr const char* ALIAS = "MultiSelectCovers";

    DynArray<uint64_t> selectedCovers; // 40
    DynArray<game::data::AIRingType> coverRingTypes; // 50
    DynArray<bool> coversUseLOS; // 60
    DynArray<CName> sourcePresetName; // 70
};
RED4EXT_ASSERT_SIZE(SelectedCoversData, 0x80);
} // namespace AI::behavior
using AIbehaviorSelectedCoversData = AI::behavior::SelectedCoversData;
using MultiSelectCovers = AI::behavior::SelectedCoversData;
} // namespace RED4ext

// clang-format on
