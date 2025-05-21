#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ProxyType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

#include <cstdint>

namespace RED4ext::physics
{
struct __declspec(align(0x10)) TraceResult
{
    static constexpr const char* NAME = "physicsTraceResult";
    static constexpr const char* ALIAS = "TraceResult";

    Vector3 position;              // 00
    Vector3 normal;                // 0C
    CName material;                // 18
    Transform transform;           // 20
    uint64_t unk40;                // 40
    uint32_t proxyID;              // 48
    uint32_t actorIndex;           // 4C
    uint32_t shapeIndex;           // 50
    float distance;                // 54
    uint8_t flags;                 // 58
    ProxyType proxyType;           // 59
    SimulationType simulationType; // 5A
};
RED4EXT_ASSERT_SIZE(TraceResult, 0x60);
RED4EXT_ASSERT_OFFSET(TraceResult, proxyID, 0x48);
RED4EXT_ASSERT_OFFSET(TraceResult, actorIndex, 0x4C);
RED4EXT_ASSERT_OFFSET(TraceResult, proxyType, 0x59);
} // namespace RED4ext::physics
