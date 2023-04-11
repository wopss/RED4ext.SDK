#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct WetnessComponent : ent::IComponent
{
    static constexpr const char* NAME = "entWetnessComponent";
    static constexpr const char* ALIAS = "WetnessComponent";

    uint8_t unk90[0xF8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(WetnessComponent, 0xF8);
} // namespace ent
using entWetnessComponent = ent::WetnessComponent;
using WetnessComponent = ent::WetnessComponent;
} // namespace RED4ext

// clang-format on
