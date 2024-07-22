#pragma once

#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct MetaRig
{
    DynArray<QsTransform> boneTransforms; // 00
    DynArray<int16_t> parentIndeces;      // 10
    DynArray<CName> boneNames;            // 20
    DynArray<uint16_t> unk30;             // 30
    DynArray<float> referenceTracks;      // 40
    DynArray<CName> trackNames;           // 50
    uint64_t hash;                        // 60
    DynArray<uint64_t> unk68;             // 68 - array of struct
};
RED4EXT_ASSERT_SIZE(MetaRig, 0x78);

struct MetaRigReference
{
    uint32_t metaRigID; // 00
    uint32_t unk04;     // 04
    MetaRig* metaRig;   // 08
    bool unk10;         // 10
    bool unk11;         // 11
};
RED4EXT_ASSERT_SIZE(MetaRigReference, 0x18);

struct MetaRigInfo
{
    DynArray<MetaRigReference*> metaRigReferences; // 00
    uint32_t unk10;                                // 10
    uint32_t unk14;                                // 14
};
RED4EXT_ASSERT_SIZE(MetaRigInfo, 0x18);
} // namespace anim
} // namespace RED4ext
