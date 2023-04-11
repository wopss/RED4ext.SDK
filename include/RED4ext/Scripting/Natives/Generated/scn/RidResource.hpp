#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorRid.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CameraRid.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidSerialNumber.hpp>

namespace RED4ext
{
namespace scn
{
struct RidResource : CResource
{
    static constexpr const char* NAME = "scnRidResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::ActorRid> actors; // 40
    DynArray<scn::CameraRid> cameras; // 50
    scn::RidSerialNumber nextSerialNumber; // 60
    uint32_t version; // 64
};
RED4EXT_ASSERT_SIZE(RidResource, 0x68);
} // namespace scn
using scnRidResource = scn::RidResource;
} // namespace RED4ext

// clang-format on
