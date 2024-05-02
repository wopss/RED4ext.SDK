#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/entEntity.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ent::Entity, 0x160);
using entEntity = ent::Entity;
using Entity = ent::Entity;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECustomCameraTarget.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>

namespace RED4ext
{
namespace ent
{
struct Entity : IScriptable
{
    static constexpr const char* NAME = "entEntity";
    static constexpr const char* ALIAS = "Entity";

    uint8_t unk40[0x154 - 0x40]; // 40
    ECustomCameraTarget customCameraTarget; // 154
    uint8_t unk155[0x15B - 0x155]; // 155
    RenderSceneLayerMask renderSceneLayerMask; // 15B
    uint8_t unk15C[0x160 - 0x15C]; // 15C
};
RED4EXT_ASSERT_SIZE(Entity, 0x160);
} // namespace ent
using entEntity = ent::Entity;
using Entity = ent::Entity;
} // namespace RED4ext
*/

// clang-format on
