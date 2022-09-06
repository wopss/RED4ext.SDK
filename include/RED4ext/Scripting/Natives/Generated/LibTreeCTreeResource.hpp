#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariablesList.hpp>

namespace RED4ext
{
struct LibTreeCTreeResource : CResource
{
    static constexpr const char* NAME = "LibTreeCTreeResource";
    static constexpr const char* ALIAS = NAME;

    LibTreeDefTreeVariablesList variables; // 40
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LibTreeCTreeResource, 0x68);
} // namespace RED4ext

// clang-format on
