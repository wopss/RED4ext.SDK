#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::ui
{
struct NarrativePlateData
{
    static constexpr const char* NAME = "gameuiNarrativePlateData";
    static constexpr const char* ALIAS = "NarrativePlateData";

    CString text; // 00
    CString caption; // 20
    WeakHandle<game::Object> entity; // 40
};
RED4EXT_ASSERT_SIZE(NarrativePlateData, 0x50);
} // namespace game::ui
using gameuiNarrativePlateData = game::ui::NarrativePlateData;
using NarrativePlateData = game::ui::NarrativePlateData;
} // namespace RED4ext

// clang-format on
