#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct IconsGeneratorContext_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataIconsGeneratorContext_Record";
    static constexpr const char* ALIAS = "IconsGeneratorContext_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IconsGeneratorContext_Record, 0x50);
} // namespace game::data
using IconsGeneratorContext_Record = game::data::IconsGeneratorContext_Record;
} // namespace RED4ext
