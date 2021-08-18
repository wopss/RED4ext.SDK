#pragma once

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

namespace game { 
struct SmartObjectDefinition : ISerializable
{
    static constexpr const char* NAME = "gameSmartObjectDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<game::SmartObjectResource> resource; // 30
    Ref<anim::ActionAnimDatabase> motionActionDatabase; // 48
    DynArray<CName> actions; // 60
    bool enabled; // 70
    bool overrideGeneratedParameters; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(SmartObjectDefinition, 0x78);
} // namespace game
} // namespace RED4ext
