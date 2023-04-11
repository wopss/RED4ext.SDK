#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct EffectObjectFilter_RejectOnPrereq : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_RejectOnPrereq";
    static constexpr const char* ALIAS = NAME;

    Handle<game::IPrereq> prereq; // 40
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_RejectOnPrereq, 0x50);
} // namespace game
using gameEffectObjectFilter_RejectOnPrereq = game::EffectObjectFilter_RejectOnPrereq;
} // namespace RED4ext

// clang-format on
