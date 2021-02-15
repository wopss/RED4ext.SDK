#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/anim/IKTargetRequest.hpp>
#include <RED4ext/Types/generated/scn/AnimTargetBasicData.hpp>

namespace RED4ext
{
namespace scn { 
struct IKEventData
{
    static constexpr const char* NAME = "scnIKEventData";
    static constexpr const char* ALIAS = NAME;

    Quaternion orientation; // 00
    scn::AnimTargetBasicData basic; // 10
    CName chainName; // 60
    anim::IKTargetRequest request; // 68
};
RED4EXT_ASSERT_SIZE(IKEventData, 0x80);
} // namespace scn
} // namespace RED4ext
