#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct PhotoModeBackgroundViewComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundViewComponent";
    static constexpr const char* ALIAS = "PhotoModeBackgroundViewComponent";

    uint8_t unk90[0xC0 - 0x90]; // 90
    NodeRef backgroundPrefabRef; // C0
    NodeRef targetPointRef; // C8
    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundViewComponent, 0xE0);
} // namespace game
using PhotoModeBackgroundViewComponent = game::PhotoModeBackgroundViewComponent;
} // namespace RED4ext
