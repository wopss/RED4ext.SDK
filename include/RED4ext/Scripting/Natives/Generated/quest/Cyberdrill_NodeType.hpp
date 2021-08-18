#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Cyberdrill_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct Cyberdrill_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questCyberdrill_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::Cyberdrill_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(Cyberdrill_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
