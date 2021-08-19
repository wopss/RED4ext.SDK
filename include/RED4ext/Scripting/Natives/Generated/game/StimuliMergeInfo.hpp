#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimPropagation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game { 
struct StimuliMergeInfo
{
    static constexpr const char* NAME = "gameStimuliMergeInfo";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 00
    WeakHandle<game::Object> instigator; // 10
    float radius; // 20
    game::data::StimType type; // 24
    game::data::StimPropagation propagationType; // 28
    uint8_t unk2C[0x40 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(StimuliMergeInfo, 0x40);
} // namespace game
} // namespace RED4ext
