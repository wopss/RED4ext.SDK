#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityParameter.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace ent
{
struct CorpseParameter : ent::EntityParameter
{
    static constexpr const char* NAME = "entCorpseParameter";
    static constexpr const char* ALIAS = NAME;

    uint32_t lod; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<QsTransform> bakedPose; // 38
    DynArray<CName> bakedBoneNames; // 48
    DynArray<CRUID> forceLOD0Components; // 58
    RaRef<anim::Rig> baseRig; // 68
};
RED4EXT_ASSERT_SIZE(CorpseParameter, 0x70);
} // namespace ent
using entCorpseParameter = ent::CorpseParameter;
} // namespace RED4ext

// clang-format on
