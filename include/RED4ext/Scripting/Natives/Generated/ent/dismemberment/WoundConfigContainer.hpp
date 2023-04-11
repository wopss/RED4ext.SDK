#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundConfig.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct WoundConfigContainer : ISerializable
{
    static constexpr const char* NAME = "entdismembermentWoundConfigContainer";
    static constexpr const char* ALIAS = NAME;

    CName AppearanceName; // 30
    DynArray<ent::dismemberment::WoundConfig> Wounds; // 38
};
RED4EXT_ASSERT_SIZE(WoundConfigContainer, 0x48);
} // namespace ent::dismemberment
using entdismembermentWoundConfigContainer = ent::dismemberment::WoundConfigContainer;
} // namespace RED4ext

// clang-format on
