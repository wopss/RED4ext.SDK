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
struct VariantDataViewWrapper : ink::BaseVariantDataSource
{
    static constexpr const char* NAME = "inkVariantDataViewWrapper";
    static constexpr const char* ALIAS = "VariantDataView";

};
RED4EXT_ASSERT_SIZE(VariantDataViewWrapper, 0x48);
} // namespace ink
using inkVariantDataViewWrapper = ink::VariantDataViewWrapper;
using VariantDataView = ink::VariantDataViewWrapper;
} // namespace RED4ext

// clang-format on
