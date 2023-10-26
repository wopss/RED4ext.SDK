#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimPropagation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimTargets.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct __declspec(align(0x10)) StimuliMergeInfo
{
    static constexpr const char* NAME = "gameStimuliMergeInfo";
    static constexpr const char* ALIAS = "StimuliMergeInfo";

    Vector4 position; // 00
    WeakHandle<game::Object> instigator; // 10
    float radius; // 20
    game::data::StimType type; // 24
    game::data::StimPropagation propagationType; // 28
    game::data::StimTargets targets; // 2C
    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(StimuliMergeInfo, 0x40);
} // namespace game
using gameStimuliMergeInfo = game::StimuliMergeInfo;
using StimuliMergeInfo = game::StimuliMergeInfo;
} // namespace RED4ext

// clang-format on
