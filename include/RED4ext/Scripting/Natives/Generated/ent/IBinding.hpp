#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TagMask.hpp>

namespace RED4ext
{
namespace ent
{
struct IBinding : ISerializable
{
    static constexpr const char* NAME = "entIBinding";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    ent::TagMask enableMask; // 38
    CName bindName; // 68
};
RED4EXT_ASSERT_SIZE(IBinding, 0x70);
} // namespace ent
using entIBinding = ent::IBinding;
} // namespace RED4ext

// clang-format on
