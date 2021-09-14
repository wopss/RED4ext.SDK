#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AddItemsEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataAddItemsEffector_Record";
    static constexpr const char* ALIAS = "AddItemsEffector_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AddItemsEffector_Record, 0x60);
} // namespace game::data
using AddItemsEffector_Record = game::data::AddItemsEffector_Record;
} // namespace RED4ext
