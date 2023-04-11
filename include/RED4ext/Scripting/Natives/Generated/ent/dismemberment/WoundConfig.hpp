#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/ResourceSetE.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct WoundConfig : ISerializable
{
    static constexpr const char* NAME = "entdismembermentWoundConfig";
    static constexpr const char* ALIAS = NAME;

    CName WoundName; // 30
    ent::dismemberment::ResourceSetE ResourceSet; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(WoundConfig, 0x40);
} // namespace ent::dismemberment
using entdismembermentWoundConfig = ent::dismemberment::WoundConfig;
} // namespace RED4ext

// clang-format on
