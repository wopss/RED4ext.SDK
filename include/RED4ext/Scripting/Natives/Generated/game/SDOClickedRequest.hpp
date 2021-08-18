#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game { 
struct SDOClickedRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSDOClickedRequest";
    static constexpr const char* ALIAS = "SDOClickedRequest";

    CName fullPath; // 48
    CName key; // 50
};
RED4EXT_ASSERT_SIZE(SDOClickedRequest, 0x58);
} // namespace game
using SDOClickedRequest = game::SDOClickedRequest;
} // namespace RED4ext
