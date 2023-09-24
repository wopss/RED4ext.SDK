#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct ActionAnimDatabase; }
namespace game { struct SmartObjectResource; }

namespace game
{
struct SmartObjectDefinition : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectDefinition";
    static constexpr const char* ALIAS = NAME;

    bool overrideGeneratedParameters; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    Ref<game::SmartObjectResource> resource; // 38
    Ref<anim::ActionAnimDatabase> motionActionDatabase; // 50
    DynArray<CName> actions; // 68
    bool enabled; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(SmartObjectDefinition, 0x80);
} // namespace game
using gameSmartObjectDefinition = game::SmartObjectDefinition;
} // namespace RED4ext

// clang-format on
