#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingInfo.hpp>

namespace RED4ext
{
namespace game { struct MountEventData; }

namespace game::mounting
{
struct MountingRequest : IScriptable
{
    static constexpr const char* NAME = "gamemountingMountingRequest";
    static constexpr const char* ALIAS = "MountingRequest";

    game::mounting::MountingInfo lowLevelMountingInfo; // 40
    bool preservePositionAfterMounting; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    Handle<game::MountEventData> mountData; // 60
};
RED4EXT_ASSERT_SIZE(MountingRequest, 0x70);
} // namespace game::mounting
using gamemountingMountingRequest = game::mounting::MountingRequest;
using MountingRequest = game::mounting::MountingRequest;
} // namespace RED4ext

// clang-format on
