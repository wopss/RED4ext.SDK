#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/MeshDef.hpp>

namespace RED4ext
{
namespace game { 
struct VisionModuleParams
{
    static constexpr const char* NAME = "gameVisionModuleParams";
    static constexpr const char* ALIAS = NAME;

    CName visionTag; // 00
    DynArray<game::MeshDef> meshComponents; // 08
    uint8_t unk18[0x48 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(VisionModuleParams, 0x48);
} // namespace game
} // namespace RED4ext
