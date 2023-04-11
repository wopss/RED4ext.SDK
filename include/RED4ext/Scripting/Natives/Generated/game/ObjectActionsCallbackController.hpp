#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectActionsCallbackController : IScriptable
{
    static constexpr const char* NAME = "gameObjectActionsCallbackController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ObjectActionsCallbackController, 0xB8);
} // namespace game
using gameObjectActionsCallbackController = game::ObjectActionsCallbackController;
} // namespace RED4ext

// clang-format on
