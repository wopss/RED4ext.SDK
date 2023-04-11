#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace scn
{
struct DialogLineData
{
    static constexpr const char* NAME = "scnDialogLineData";
    static constexpr const char* ALIAS = NAME;

    CRUID id; // 00
    CString text; // 08
    scn::DialogLineType type; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    WeakHandle<game::Object> speaker; // 30
    CString speakerName; // 40
    float duration; // 60
    bool isPersistent; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(DialogLineData, 0x68);
} // namespace scn
using scnDialogLineData = scn::DialogLineData;
} // namespace RED4ext

// clang-format on
