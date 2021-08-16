#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace game { 
struct GOGRewardPack
{
    static constexpr const char* NAME = "gameGOGRewardPack";
    static constexpr const char* ALIAS = "GOGRewardPack";

    CString id; // 00
    CString title; // 20
    CString reason; // 40
    CName iconSlot; // 60
    DynArray<uint64_t> rewards; // 68
};
RED4EXT_ASSERT_SIZE(GOGRewardPack, 0x78);
} // namespace game
using GOGRewardPack = game::GOGRewardPack;
} // namespace RED4ext
