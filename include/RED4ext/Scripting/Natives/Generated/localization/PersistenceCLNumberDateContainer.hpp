#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace localization
{
struct PersistenceCLNumberDateContainer : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceCLNumberDateContainer";
    static constexpr const char* ALIAS = NAME;

    CName clNumber; // 30
    CName clTimestamp; // 38
    DynArray<CString> clGeneratedIds; // 40
};
RED4EXT_ASSERT_SIZE(PersistenceCLNumberDateContainer, 0x50);
} // namespace localization
using localizationPersistenceCLNumberDateContainer = localization::PersistenceCLNumberDateContainer;
} // namespace RED4ext

// clang-format on
