#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeParameterList.hpp>

namespace RED4ext
{
struct LibTreeCTreeResource;

struct LibTreeCTreeReference : ISerializable
{
    static constexpr const char* NAME = "LibTreeCTreeReference";
    static constexpr const char* ALIAS = NAME;

    Ref<LibTreeCTreeResource> TreeDefinition; // 30
    LibTreeParameterList parameters; // 48
    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LibTreeCTreeReference, 0x70);
} // namespace RED4ext

// clang-format on
