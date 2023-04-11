#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AbstractDataSourceWrapper.hpp>

namespace RED4ext
{
namespace ink
{
struct BaseVariantDataSource : ink::AbstractDataSourceWrapper
{
    static constexpr const char* NAME = "inkBaseVariantDataSource";
    static constexpr const char* ALIAS = "BaseVariantDataSource";

};
RED4EXT_ASSERT_SIZE(BaseVariantDataSource, 0x48);
} // namespace ink
using inkBaseVariantDataSource = ink::BaseVariantDataSource;
using BaseVariantDataSource = ink::BaseVariantDataSource;
} // namespace RED4ext

// clang-format on
