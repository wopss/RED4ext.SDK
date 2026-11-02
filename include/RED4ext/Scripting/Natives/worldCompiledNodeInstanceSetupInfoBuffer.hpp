#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingDataGroup.hpp>

namespace RED4ext
{
namespace world
{
enum class NodeFlag : uint32_t
{
    BoostedToPrefabDistance = 1 << 0,
    AllowForceStreamIn = 1 << 1,
    Interior = 1 << 2,
    NoCollision = 1 << 3,
    Quest = 1 << 4,
    PrefabProxyMesh = 1 << 5,
    Building = 1 << 6,
    Decoration = 1 << 7,
    Road = 1 << 8,
    Terrain = 1 << 9,
    VisualFluff = 1 << 10,
    ExludedOnConsole = 1 << 11,
    Is2DCheck = 1 << 12,
    IsCullable = 1 << 13,
    ForceCulledAlways = 1 << 14,
    ForceCulledNearPeripheral = 1 << 15,
    AdvertisementBillboardEntity = 1 << 16,
    GlobalIllumination = 1 << 17,
    FallbackDrop = 1 << 18,
    AllowDistanceBoosting = 1 << 19,
    ExludedOnNextGenConsoles = 1 << 20
};

struct __declspec(align(0x10)) CompiledNodeInstanceSetupInfo
{
    inline uint32_t GetNodeIndex(uint32_t aBufferVersion) const
    {
        return static_cast<uint32_t>(aBufferVersion >= 68 ? nodeIndex : v62.nodeIndex);
    }

    inline void SetNodeIndex(uint32_t aBufferVersion, uint16_t aIndex)
    {
        if (aBufferVersion >= 68)
        {
            nodeIndex = aIndex;
        }
        else
        {
            v62.nodeIndex = aIndex;
        }
    }

    inline uint32_t GetInnerNodeIndex(uint32_t aBufferVersion) const
    {
        return static_cast<uint32_t>(aBufferVersion >= 68 ? innerNodeIndex : 0xFFFF);
    }

    inline void SetInnerNodeIndex(uint32_t aBufferVersion, uint32_t aIndex)
    {
        if (aBufferVersion >= 68)
        {
            innerNodeIndex = aIndex;
        }
    }

    inline uint8_t GetStreamingPriority(uint32_t aBufferVersion) const
    {
        return aBufferVersion >= 68 ? streamingPriority : v62.streamingPriority;
    }

    inline void SetStreamingPriority(uint32_t aBufferVersion, uint8_t aPriority)
    {
        if (aBufferVersion >= 68)
        {
            streamingPriority = aPriority;
        }
        else
        {
            v62.streamingPriority = aPriority;
        }
    }

    inline uint16_t GetTimeOfDayVisibilityMask(uint32_t aBufferVersion) const
    {
        return aBufferVersion >= 68 ? todvisMask : v62.todvisMask;
    }

    inline void SetTimeOfDayVisibilityMask(uint32_t aBufferVersion, uint16_t aMask)
    {
        if (aBufferVersion >= 68)
        {
            todvisMask = aMask;
        }
        else
        {
            v62.todvisMask = aMask;
        }
    }

    inline float GetStreamingDistance(uint32_t aBufferVersion) const
    {
        return aBufferVersion >= 68 ? streamingDistance : v62.streamingDistance;
    }

    inline void SetStreamingDistance(uint32_t aBufferVersion, float aDistance)
    {
        if (aBufferVersion >= 68)
        {
            streamingDistance = aDistance;
        }
        else
        {
            v62.streamingDistance = aDistance;
        }
    }

    inline float GetSecondaryRefPointDistance(uint32_t aBufferVersion) const
    {
        return aBufferVersion >= 68 ? secondaryRefPointDistance : v62.secondaryRefPointDistance;
    }

    inline void SetSecondaryRefPointDistance(uint32_t aBufferVersion, float aDistance)
    {
        if (aBufferVersion >= 68)
        {
            secondaryRefPointDistance = aDistance;
        }
        else
        {
            v62.secondaryRefPointDistance = aDistance;
        }
    }

    inline StreamingDataGroup GetDataGroup(uint32_t aBufferVersion) const
    {
        return aBufferVersion >= 68 ? dataGroup : v62.dataGroup;
    }

    inline void SetDataGroup(uint32_t aBufferVersion, StreamingDataGroup aGroup)
    {
        if (aBufferVersion >= 68)
        {
            dataGroup = aGroup;
        }
        else
        {
            v62.dataGroup = aGroup;
        }
    }

    inline uint32_t GetFlags(uint32_t aBufferVersion) const
    {
        return static_cast<uint32_t>(aBufferVersion >= 68 ? flags : v62.flags);
    }

    inline void SetFlags(uint32_t aBufferVersion, uint32_t aFlags)
    {
        if (aBufferVersion >= 68)
        {
            flags = aFlags;
        }
        else
        {
            v62.flags = aFlags;
        }
    }

    inline bool HasFlag(uint32_t aBufferVersion, NodeFlag aFlag) const
    {
        const auto mask = static_cast<uint32_t>(aFlag);
        return (GetFlags(aBufferVersion) & mask) == mask;
    }

    inline void SetFlag(uint32_t aBufferVersion, NodeFlag aFlag)
    {
        const auto mask = static_cast<uint32_t>(aFlag);
        SetFlags(aBufferVersion, GetFlags(aBufferVersion) | mask);
    }

    Transform transform;               // 00
    Vector3 scale;                     // 20
    Vector3 secondaryRefPointPosition; // 2C
    Vector3 streamingRefPoint;         // 38
    Vector3 preboostStreamingRefPoint; // 44
    Node* node;                        // 50
    uint64_t globalNodeID;             // 58
    uint64_t proxyNodeID;              // 60
    ResourcePath unk68;                // 68
    union
    {
        // Version 68 (patch 2.5, current)
        struct
        {
            uint64_t nodeIndex : 19;         // 70
            uint64_t flags : 21;             // 70
            uint64_t streamingPriority : 8;  // 70
            uint64_t todvisMask : 16;        // 70
            float secondaryRefPointDistance; // 78
            float streamingDistance;         // 7C
            uint32_t innerNodeIndex;         // 80
            StreamingDataGroup dataGroup;    // 84
            uint8_t unk85[0x90 - 0x85];      // 85
        };
        // Version 62 (patch 2.31 and earlier)
        struct
        {
            float secondaryRefPointDistance; // 70
            float streamingDistance;         // 74
            uint64_t nodeIndex : 20;         // 78
            uint64_t flags : 20;             // 78
            uint64_t streamingPriority : 8;  // 78
            uint64_t todvisMask : 16;        // 78
            StreamingDataGroup dataGroup;    // 80
            uint8_t unk81[0x90 - 0x81];      // 81
        } v62;
    };
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfo, 0x90);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, node, 0x50);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, globalNodeID, 0x58);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, proxyNodeID, 0x60);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, secondaryRefPointDistance, 0x78);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, streamingDistance, 0x7C);
RED4EXT_ASSERT_OFFSET(CompiledNodeInstanceSetupInfo, innerNodeIndex, 0x80);

struct CompiledNodeInstanceSetupInfoBuffer
{
    static constexpr const char* NAME = "worldCompiledNodeInstanceSetupInfoBuffer";
    static constexpr const char* ALIAS = NAME;

    TDataBuffer<CompiledNodeInstanceSetupInfo> nodeSetups; // 00
    uint32_t version;                                      // 28
    uint8_t unk2C[0x30 - 0x2C];                            // 2C
};
RED4EXT_ASSERT_SIZE(CompiledNodeInstanceSetupInfoBuffer, 0x30);
} // namespace world
using worldCompiledNodeInstanceSetupInfo = world::CompiledNodeInstanceSetupInfo;
using worldCompiledNodeInstanceSetupInfoBuffer = world::CompiledNodeInstanceSetupInfoBuffer;
using worldNodeFlag = world::NodeFlag;
} // namespace RED4ext
