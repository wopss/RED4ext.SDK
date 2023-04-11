#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptionOperation; }

namespace scn
{
struct InterruptManagerNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnInterruptManagerNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::IInterruptionOperation>> interruptionOperations; // 48
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(InterruptManagerNode, 0x68);
} // namespace scn
using scnInterruptManagerNode = scn::InterruptManagerNode;
} // namespace RED4ext

// clang-format on
