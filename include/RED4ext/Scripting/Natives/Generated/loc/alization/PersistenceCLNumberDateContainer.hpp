#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace loc::alization { 
struct PersistenceCLNumberDateContainer : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceCLNumberDateContainer";
    static constexpr const char* ALIAS = NAME;

    CName clNumber; // 30
    CName clTimestamp; // 38
};
RED4EXT_ASSERT_SIZE(PersistenceCLNumberDateContainer, 0x40);
} // namespace loc::alization
} // namespace RED4ext
