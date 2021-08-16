#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace interop { 
struct DispatchPrefabProxyJobsResult
{
    static constexpr const char* NAME = "interopDispatchPrefabProxyJobsResult";
    static constexpr const char* ALIAS = NAME;

    uint32_t numProxyJobsDispatched; // 00
    uint32_t numProxyJobsSkipped; // 04
    uint32_t numProxyJobsFailed; // 08
};
RED4EXT_ASSERT_SIZE(DispatchPrefabProxyJobsResult, 0xC);
} // namespace interop
} // namespace RED4ext
