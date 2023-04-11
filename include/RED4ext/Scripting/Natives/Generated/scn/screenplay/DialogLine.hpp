#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocstringId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/LineUsage.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct DialogLine
{
    static constexpr const char* NAME = "scnscreenplayDialogLine";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId itemId; // 00
    scn::ActorId speaker; // 04
    scn::ActorId addressee; // 08
    scn::screenplay::LineUsage usage; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    scn::loc::LocstringId locstringId; // 10
    CName maleLipsyncAnimationName; // 18
    CName femaleLipsyncAnimationName; // 20
};
RED4EXT_ASSERT_SIZE(DialogLine, 0x28);
} // namespace scn::screenplay
using scnscreenplayDialogLine = scn::screenplay::DialogLine;
} // namespace RED4ext

// clang-format on
