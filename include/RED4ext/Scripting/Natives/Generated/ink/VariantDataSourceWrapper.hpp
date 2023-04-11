#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseVariantDataSource.hpp>

namespace RED4ext
{
namespace ink
{
struct VariantDataSourceWrapper : ink::BaseVariantDataSource
{
    static constexpr const char* NAME = "inkVariantDataSourceWrapper";
    static constexpr const char* ALIAS = "VariantDataSource";

};
RED4EXT_ASSERT_SIZE(VariantDataSourceWrapper, 0x48);
} // namespace ink
using inkVariantDataSourceWrapper = ink::VariantDataSourceWrapper;
using VariantDataSource = ink::VariantDataSourceWrapper;
} // namespace RED4ext

// clang-format on
