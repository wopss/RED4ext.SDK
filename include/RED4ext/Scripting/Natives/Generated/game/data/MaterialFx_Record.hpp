#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct MaterialFx_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMaterialFx_Record";
    static constexpr const char* ALIAS = "MaterialFx_Record";

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MaterialFx_Record, 0xF0);
} // namespace game::data
using gamedataMaterialFx_Record = game::data::MaterialFx_Record;
using MaterialFx_Record = game::data::MaterialFx_Record;
} // namespace RED4ext

// clang-format on
