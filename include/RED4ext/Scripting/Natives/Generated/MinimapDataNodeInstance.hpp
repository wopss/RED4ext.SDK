#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) MinimapDataNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "MinimapDataNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x190 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MinimapDataNodeInstance, 0x190);
} // namespace RED4ext

// clang-format on
