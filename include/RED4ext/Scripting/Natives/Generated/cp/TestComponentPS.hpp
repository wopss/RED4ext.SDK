#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace cp
{
struct TestComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "cpTestComponentPS";
    static constexpr const char* ALIAS = NAME;

    int32_t something; // 68
    bool somethingNotInstanceEdiable; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    CName nameEditable; // 70
    CName nameInstanceEditable; // 78
    CName namePersistent; // 80
    CName namePersistentEdiable; // 88
    CName namePersistentInstanceEditable; // 90
};
RED4EXT_ASSERT_SIZE(TestComponentPS, 0x98);
} // namespace cp
using cpTestComponentPS = cp::TestComponentPS;
} // namespace RED4ext

// clang-format on
