#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/ECustomCameraTarget.hpp>
#include <RED4ext/Types/generated/RenderSceneLayerMask.hpp>

namespace RED4ext
{
namespace ent { 
struct Entity : IScriptable
{
    static constexpr const char* NAME = "entEntity";
    static constexpr const char* ALIAS = "Entity";

    uint8_t unk40[0x14C - 0x40]; // 40
    ECustomCameraTarget customCameraTarget; // 14C
    uint8_t unk14D[0x153 - 0x14D]; // 14D
    RenderSceneLayerMask renderSceneLayerMask; // 153
    uint8_t unk154[0x158 - 0x154]; // 154
};
RED4EXT_ASSERT_SIZE(Entity, 0x158);
} // namespace ent
using Entity = ent::Entity;
} // namespace RED4ext
