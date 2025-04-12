#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/RenderResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>

#include <cstdint>

namespace RED4ext
{
struct IRenderProxy
{
    using AllocatorType = Memory::RenderProxyAllocator;

    virtual void sub_00();                   // 00
    virtual void sub_08();                   // 08
    virtual ~IRenderProxy() = default;       // 10
    virtual uint8_t sub_18();                // 18
    virtual void sub_20();                   // 20
    virtual void sub_28();                   // 28
    virtual void sub_30();                   // 30
    virtual bool sub_38();                   // 38
    virtual bool sub_40();                   // 40
    virtual void sub_48();                   // 48
    virtual void sub_50();                   // 50
    virtual uint32_t sub_58();               // 58
    virtual float sub_60();                  // 60
    virtual uint8_t sub_68();                // 68
    virtual uint8_t sub_70();                // 70
    virtual void sub_78(void* a1);           // 78
    virtual void sub_80(void* a1, void* a2); // 80
    virtual bool sub_88(void* a1, void* a2); // 88
    virtual void sub_90(void* a1);           // 90
    virtual void sub_98(void* a1);           // 98
    virtual void sub_A0();                   // A0
    virtual uint8_t sub_A8(void* a1);        // A8
    virtual void sub_B0(void* a1);           // B0
    virtual bool sub_B8();                   // B8
    virtual bool sub_C0();                   // C0
    virtual uint8_t sub_C8();                // C8
    virtual uint8_t sub_D0();                // D0
    virtual uint8_t sub_D8();                // D8
    virtual uint8_t sub_E0();                // E0
    virtual void sub_E8();                   // E8
    virtual void sub_F0();                   // F0

    uint8_t unk08[0x48 - 0x08];         // 08
    IRenderProxyCustomData* customData; // 48
    uint8_t unk50[0x98 - 0x50];         // 50
};
RED4EXT_ASSERT_SIZE(IRenderProxy, 0x98);
RED4EXT_ASSERT_OFFSET(IRenderProxy, customData, 0x48);

struct RenderProxyBase : IRenderProxy
{
    virtual void sub_F8() = 0; // F8
};
RED4EXT_ASSERT_SIZE(RenderProxyBase, 0x98);

struct CRenderProxy : RenderProxyBase
{
    uint8_t unk98[0xb8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(CRenderProxy, 0xb8);

struct CRenderProxy_Mesh : CRenderProxy
{
    uint8_t unkB8[0xd8 - 0xb8];  // B8
    CRenderMesh* renderMesh;     // D8
    uint8_t unkE0[0x1c0 - 0xe0]; // E0
};
RED4EXT_ASSERT_SIZE(CRenderProxy_Mesh, 0x1c0);
RED4EXT_ASSERT_OFFSET(CRenderProxy_Mesh, renderMesh, 0xD8);

struct CRenderProxyHandle
{
    virtual ~CRenderProxyHandle() = default; // 00

    uint8_t unk08[0x10 - 0x08]; // 08
    IRenderProxy* renderProxy;  // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CRenderProxyHandle, 0x28);
RED4EXT_ASSERT_OFFSET(CRenderProxyHandle, renderProxy, 0x10);
} // namespace RED4ext
