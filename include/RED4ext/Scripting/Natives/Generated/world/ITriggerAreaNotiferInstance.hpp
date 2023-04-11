#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct ITriggerAreaNotiferInstance : IScriptable
{
    static constexpr const char* NAME = "worldITriggerAreaNotiferInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ITriggerAreaNotiferInstance, 0x58);
} // namespace world
using worldITriggerAreaNotiferInstance = world::ITriggerAreaNotiferInstance;
} // namespace RED4ext

// clang-format on
