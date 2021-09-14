#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingInfo.hpp>

namespace RED4ext
{
namespace game { struct MountEventData; }

namespace game::mounting { 
struct UnmountingRequest : IScriptable
{
    static constexpr const char* NAME = "gamemountingUnmountingRequest";
    static constexpr const char* ALIAS = "UnmountingRequest";

    game::mounting::MountingInfo lowLevelMountingInfo; // 40
    Handle<game::MountEventData> mountData; // 58
};
RED4EXT_ASSERT_SIZE(UnmountingRequest, 0x68);
} // namespace game::mounting
using UnmountingRequest = game::mounting::UnmountingRequest;
} // namespace RED4ext
