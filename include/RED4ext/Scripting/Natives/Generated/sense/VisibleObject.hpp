#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseObjectType.hpp>

namespace RED4ext
{
namespace sense
{
struct VisibleObject : IScriptable
{
    static constexpr const char* NAME = "senseVisibleObject";
    static constexpr const char* ALIAS = "VisibleObject";

    uint8_t unk40[0x68 - 0x40]; // 40
    CName description; // 68
    uint8_t unk70[0x7C - 0x70]; // 70
    float visibilityDistance; // 7C
    uint8_t unk80[0x8C - 0x80]; // 80
    game::data::SenseObjectType visibleObjectType; // 8C
    uint8_t unk90[0xD0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(VisibleObject, 0xD0);
} // namespace sense
using senseVisibleObject = sense::VisibleObject;
using VisibleObject = sense::VisibleObject;
} // namespace RED4ext

// clang-format on
