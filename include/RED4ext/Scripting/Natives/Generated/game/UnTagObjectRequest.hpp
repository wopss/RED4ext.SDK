#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game { 
struct UnTagObjectRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameUnTagObjectRequest";
    static constexpr const char* ALIAS = "UnTagObjectRequest";

    WeakHandle<game::Object> object; // 48
};
RED4EXT_ASSERT_SIZE(UnTagObjectRequest, 0x58);
} // namespace game
using UnTagObjectRequest = game::UnTagObjectRequest;
} // namespace RED4ext
