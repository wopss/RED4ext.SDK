#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace scn
{
struct BluelineSelectedRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "scnBluelineSelectedRequest";
    static constexpr const char* ALIAS = "BluelineSelectedRequest";

};
RED4EXT_ASSERT_SIZE(BluelineSelectedRequest, 0x58);
} // namespace scn
using scnBluelineSelectedRequest = scn::BluelineSelectedRequest;
using BluelineSelectedRequest = scn::BluelineSelectedRequest;
} // namespace RED4ext

// clang-format on
