#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ResourceReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeParametersForwarder.hpp>

namespace RED4ext
{
namespace AI { 
struct ParametrizedResourceReference : AI::ResourceReference
{
    static constexpr const char* NAME = "AIParametrizedResourceReference";
    static constexpr const char* ALIAS = NAME;

    LibTreeParametersForwarder overrides; // 70
};
RED4EXT_ASSERT_SIZE(ParametrizedResourceReference, 0x80);
} // namespace AI
} // namespace RED4ext
