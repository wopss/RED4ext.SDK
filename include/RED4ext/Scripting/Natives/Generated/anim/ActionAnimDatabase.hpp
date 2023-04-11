#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ActionAnimDatabase_DatabaseRow.hpp>

namespace RED4ext
{
namespace anim
{
struct ActionAnimDatabase : CResource
{
    static constexpr const char* NAME = "animActionAnimDatabase";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::ActionAnimDatabase_DatabaseRow> rows; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ActionAnimDatabase, 0x70);
} // namespace anim
using animActionAnimDatabase = anim::ActionAnimDatabase;
} // namespace RED4ext

// clang-format on
