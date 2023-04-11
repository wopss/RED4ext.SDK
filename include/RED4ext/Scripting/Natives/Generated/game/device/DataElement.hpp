#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/device/QuestInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game::device
{
struct DataElement
{
    static constexpr const char* NAME = "gamedeviceDataElement";
    static constexpr const char* ALIAS = "DataElement";

    Handle<game::JournalPath> journalPath; // 00
    CName documentName; // 10
    CString owner; // 18
    CString date; // 38
    CString title; // 58
    CString content; // 78
    red::ResourceReferenceScriptToken videoPath; // 98
    game::device::QuestInfo questInfo; // A0
    bool isEncrypted; // B0
    bool wasRead; // B1
    bool isEnabled; // B2
    uint8_t unkB3[0xB8 - 0xB3]; // B3
};
RED4EXT_ASSERT_SIZE(DataElement, 0xB8);
} // namespace game::device
using gamedeviceDataElement = game::device::DataElement;
using DataElement = game::device::DataElement;
} // namespace RED4ext

// clang-format on
