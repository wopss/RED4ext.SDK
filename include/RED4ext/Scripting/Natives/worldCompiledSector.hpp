#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledNodeInstanceSetupInfoBuffer.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledSector
{
    static constexpr const char* NAME = "worldCompiledSector";
    static constexpr const char* ALIAS = NAME;

    CompiledNodeInstanceSetupInfoBuffer buffer; // 00
    DynArray<Handle<worldNode>> nodes;          // 30
    DynArray<NodeRef> nodeRefs;                 // 40
    DynArray<uint32_t> variantIndices;          // 50
    uint32_t persisentNodeIndex;                // 60
    uint8_t unk64[0x68 - 0x64];                 // 64
};
RED4EXT_ASSERT_SIZE(CompiledSector, 0x68);
} // namespace world
using worldCompiledSector = world::CompiledSector;
} // namespace RED4ext
