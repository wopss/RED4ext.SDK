#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ObjectSelectionManagerInterface.hpp>

namespace RED4ext
{
namespace AI
{
struct ObjectSelectionManager : AI::ObjectSelectionManagerInterface
{
    static constexpr const char* NAME = "AIObjectSelectionManager";
    static constexpr const char* ALIAS = "ObjectSelectionManager";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ObjectSelectionManager, 0x70);
} // namespace AI
using AIObjectSelectionManager = AI::ObjectSelectionManager;
using ObjectSelectionManager = AI::ObjectSelectionManager;
} // namespace RED4ext

// clang-format on
