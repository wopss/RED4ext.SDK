#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptionOperation; }
namespace scn { struct SceneResource; }

namespace scn
{
struct InterestingConversationData : ISerializable
{
    static constexpr const char* NAME = "scnInterestingConversationData";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFilename; // 30
    DynArray<Handle<scn::IInterruptionOperation>> interruptionOperations; // 38
};
RED4EXT_ASSERT_SIZE(InterestingConversationData, 0x48);
} // namespace scn
using scnInterestingConversationData = scn::InterestingConversationData;
} // namespace RED4ext

// clang-format on
