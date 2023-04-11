#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AggregationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct MultiPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameMultiPrereq";
    static constexpr const char* ALIAS = "MultiPrereq";

    DynArray<Handle<game::IPrereq>> nestedPrereqs; // 40
    game::AggregationType aggregationType; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(MultiPrereq, 0x58);
} // namespace game
using gameMultiPrereq = game::MultiPrereq;
using MultiPrereq = game::MultiPrereq;
} // namespace RED4ext

// clang-format on
