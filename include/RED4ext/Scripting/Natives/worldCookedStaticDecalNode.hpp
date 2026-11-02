#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDecalRenderMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/BufferView.hpp>

namespace RED4ext
{
struct IMaterial;

namespace world
{
#pragma pack(push, 1)
struct CookedStaticDecalInnerNode
{
    RaRef<IMaterial> material;                          // 00
    float forcedAutoHideDistance;                       // 08
    float autoHideDistance;                             // 0C
    float alpha;                                        // 10
    float normalThreshold;                              // 14
    float roughnessScale;                               // 18
    uint16_t orderNo;                                   // 1C
    uint16_t diffuseColorScaleIndex;                    // 1E
    ERenderObjectType surfaceType;                      // 20
    EDecalRenderMode decalRenderMode;                   // 21
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 22
    uint8_t flags;                                      // 23
};
RED4EXT_ASSERT_SIZE(CookedStaticDecalInnerNode, 0x24);
#pragma pack(pop)

struct CookedStaticDecalNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedStaticDecalNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedStaticDecalInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    uint8_t unk38[0x40 - 0x38];            // 38
    DynArray<uint8_t> cookedData;          // 40
    uint32_t cookedElementSize;            // 50
    uint8_t unk54[0x58 - 0x54];            // 54
    DynArray<HDRColor> diffuseColorScales; // 58
};
RED4EXT_ASSERT_SIZE(CookedStaticDecalNode, 0x68);
RED4EXT_ASSERT_OFFSET(CookedStaticDecalNode, cookedData, 0x40);
RED4EXT_ASSERT_OFFSET(CookedStaticDecalNode, diffuseColorScales, 0x58);
} // namespace world
using worldCookedStaticDecalNode = world::CookedStaticDecalNode;
using worldCookedStaticDecalInnerNode = world::CookedStaticDecalInnerNode;
} // namespace RED4ext
