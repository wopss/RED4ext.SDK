#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectCarrierComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameObjectCarrierComponent";
    static constexpr const char* ALIAS = "ObjectCarrierComponent";

    TweakDBID objectToSpawn; // 90
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(ObjectCarrierComponent, 0xA0);
} // namespace game
using gameObjectCarrierComponent = game::ObjectCarrierComponent;
using ObjectCarrierComponent = game::ObjectCarrierComponent;
} // namespace RED4ext

// clang-format on
