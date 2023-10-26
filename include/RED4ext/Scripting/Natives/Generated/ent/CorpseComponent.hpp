#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinableComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent
{
struct __declspec(align(0x10)) CorpseComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entCorpseComponent";
    static constexpr const char* ALIAS = "CorpseComponent";

    uint8_t unk130[0x160 - 0x130]; // 130
    Handle<physics::FilterData> filterData; // 160
    CName material; // 170
    uint8_t unk178[0x180 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(CorpseComponent, 0x180);
} // namespace ent
using entCorpseComponent = ent::CorpseComponent;
using CorpseComponent = ent::CorpseComponent;
} // namespace RED4ext

// clang-format on
