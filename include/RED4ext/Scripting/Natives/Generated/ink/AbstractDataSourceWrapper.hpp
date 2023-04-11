#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct AbstractDataSourceWrapper : IScriptable
{
    static constexpr const char* NAME = "inkAbstractDataSourceWrapper";
    static constexpr const char* ALIAS = "AbstractDataSource";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AbstractDataSourceWrapper, 0x48);
} // namespace ink
using inkAbstractDataSourceWrapper = ink::AbstractDataSourceWrapper;
using AbstractDataSource = ink::AbstractDataSourceWrapper;
} // namespace RED4ext

// clang-format on
