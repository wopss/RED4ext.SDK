#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkControllerProcessor.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::ControllerProcessor, 0x60);
using inkControllerProcessor = ink::ControllerProcessor;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink
{
struct ControllerProcessor : ISerializable
{
    static constexpr const char* NAME = "inkControllerProcessor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(ControllerProcessor, 0x60);
} // namespace ink
using inkControllerProcessor = ink::ControllerProcessor;
} // namespace RED4ext
*/

// clang-format on
