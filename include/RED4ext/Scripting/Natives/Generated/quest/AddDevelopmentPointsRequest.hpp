#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DevelopmentPointType.hpp>

namespace RED4ext
{
namespace quest
{
struct AddDevelopmentPointsRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questAddDevelopmentPointsRequest";
    static constexpr const char* ALIAS = "AddDevelopmentPoints";

    int32_t amountOfPoints; // 58
    game::data::DevelopmentPointType developmentPointType; // 5C
};
RED4EXT_ASSERT_SIZE(AddDevelopmentPointsRequest, 0x60);
} // namespace quest
using questAddDevelopmentPointsRequest = quest::AddDevelopmentPointsRequest;
using AddDevelopmentPoints = quest::AddDevelopmentPointsRequest;
} // namespace RED4ext

// clang-format on
