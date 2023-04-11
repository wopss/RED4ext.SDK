#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace res
{
struct ResourceMetricsReportGenerator : IScriptable
{
    static constexpr const char* NAME = "resResourceMetricsReportGenerator";
    static constexpr const char* ALIAS = "ResourceMetricsReportGenerator";

};
RED4EXT_ASSERT_SIZE(ResourceMetricsReportGenerator, 0x40);
} // namespace res
using resResourceMetricsReportGenerator = res::ResourceMetricsReportGenerator;
using ResourceMetricsReportGenerator = res::ResourceMetricsReportGenerator;
} // namespace RED4ext

// clang-format on
