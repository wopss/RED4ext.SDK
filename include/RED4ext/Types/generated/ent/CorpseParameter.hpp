#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/QsTransform.hpp>
#include <RED4ext/Types/generated/ent/EntityParameter.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace ent { 
struct CorpseParameter : ent::EntityParameter
{
    static constexpr const char* NAME = "entCorpseParameter";
    static constexpr const char* ALIAS = NAME;

    uint32_t lod; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<QsTransform> bakedPose; // 38
    DynArray<CName> bakedBoneNames; // 48
    DynArray<RaRef<anim::Rig>> rigs; // 58
    DynArray<QsTransform> bones; // 68
};
RED4EXT_ASSERT_SIZE(CorpseParameter, 0x78);
} // namespace ent
} // namespace RED4ext
