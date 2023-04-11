#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct AIDirectorTensionAnalyzeComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameAIDirectorTensionAnalyzeComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(AIDirectorTensionAnalyzeComponent, 0x98);
} // namespace game
using gameAIDirectorTensionAnalyzeComponent = game::AIDirectorTensionAnalyzeComponent;
} // namespace RED4ext

// clang-format on
