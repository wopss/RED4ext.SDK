#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/device/DataElement.hpp>

namespace RED4ext
{
namespace game::device
{
struct GenericDataContent
{
    static constexpr const char* NAME = "gamedeviceGenericDataContent";
    static constexpr const char* ALIAS = "GenericDataContent";

    CString name; // 00
    DynArray<game::device::DataElement> content; // 20
};
RED4EXT_ASSERT_SIZE(GenericDataContent, 0x30);
} // namespace game::device
using gamedeviceGenericDataContent = game::device::GenericDataContent;
using GenericDataContent = game::device::GenericDataContent;
} // namespace RED4ext

// clang-format on
