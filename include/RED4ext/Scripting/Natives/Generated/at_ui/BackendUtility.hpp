#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace at_ui
{
struct BackendUtility : IScriptable
{
    static constexpr const char* NAME = "at_uiBackendUtility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(BackendUtility, 0x50);
} // namespace at_ui
using at_uiBackendUtility = at_ui::BackendUtility;
} // namespace RED4ext

// clang-format on
