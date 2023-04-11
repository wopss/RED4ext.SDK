#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InGameMenuGameControllerItemSceneInfo
{
    static constexpr const char* NAME = "gameuiInGameMenuGameControllerItemSceneInfo";
    static constexpr const char* ALIAS = NAME;

    CName sceneName; // 00
    CName puppetSceneName; // 08
    NodeRef prefabRef; // 10
    NodeRef markerRef; // 18
};
RED4EXT_ASSERT_SIZE(InGameMenuGameControllerItemSceneInfo, 0x20);
} // namespace game::ui
using gameuiInGameMenuGameControllerItemSceneInfo = game::ui::InGameMenuGameControllerItemSceneInfo;
} // namespace RED4ext

// clang-format on
