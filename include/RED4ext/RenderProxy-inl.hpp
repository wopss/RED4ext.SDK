#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RenderProxy.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext
{
RED4EXT_INLINE void IRenderProxy::sub_00()
{
    static const UniversalRelocFunc<void (*)(void)> func(Detail::AddressHashes::IRenderProxy_sub_00);
    func();
}

RED4EXT_INLINE void IRenderProxy::sub_08()
{
    static const UniversalRelocFunc<void (*)(IRenderProxy*)> func(Detail::AddressHashes::IRenderProxy_sub_08);
    func(this);
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_18()
{
    static const UniversalRelocFunc<uint8_t (*)(IRenderProxy*)> func(Detail::AddressHashes::IRenderProxy_sub_18);
    return func(this);
}

RED4EXT_INLINE void IRenderProxy::sub_20()
{
}

RED4EXT_INLINE void IRenderProxy::sub_28()
{
}

RED4EXT_INLINE void IRenderProxy::sub_30()
{
}

RED4EXT_INLINE bool IRenderProxy::sub_38()
{
    return false;
}

RED4EXT_INLINE bool IRenderProxy::sub_40()
{
    return true;
}

RED4EXT_INLINE void IRenderProxy::sub_48()
{
}

RED4EXT_INLINE void IRenderProxy::sub_50()
{
}

RED4EXT_INLINE uint32_t IRenderProxy::sub_58()
{
    static const UniversalRelocFunc<uint32_t (*)(IRenderProxy*)> func(Detail::AddressHashes::IRenderProxy_sub_58);
    return func(this);
}

RED4EXT_INLINE float IRenderProxy::sub_60()
{
    static const UniversalRelocFunc<float (*)(IRenderProxy*)> func(Detail::AddressHashes::IRenderProxy_sub_60);
    return func(this);
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_68()
{
    return 0;
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_70()
{
    return 0;
}

RED4EXT_INLINE void IRenderProxy::sub_78(void* a1)
{
    static const UniversalRelocFunc<void (*)(IRenderProxy*, void*)> func(Detail::AddressHashes::IRenderProxy_sub_78);
    func(this, a1);
}

RED4EXT_INLINE void IRenderProxy::sub_80(void* a1, void* a2)
{
    using func_t = void (*)(IRenderProxy*, void*, void*);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::IRenderProxy_sub_80);
    func(this, a1, a2);
}

RED4EXT_INLINE bool IRenderProxy::sub_88(void* a1, void* a2)
{
    using func_t = bool (*)(IRenderProxy*, void*, void*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::IRenderProxy_sub_88);
    return func(this, a1, a2);
}

RED4EXT_INLINE void IRenderProxy::sub_90(void* a1)
{
    static const UniversalRelocFunc<bool (*)(IRenderProxy*, void*)> func(Detail::AddressHashes::IRenderProxy_sub_90);
    func(this, a1);
}

RED4EXT_INLINE void IRenderProxy::sub_98(void* a1)
{
    static const UniversalRelocFunc<void (*)(IRenderProxy*, void*)> func(Detail::AddressHashes::IRenderProxy_sub_98);
    func(this, a1);
}

RED4EXT_INLINE void IRenderProxy::sub_A0()
{
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_A8(void* a1)
{
    static const UniversalRelocFunc<uint8_t (*)(IRenderProxy*, void*)> func(Detail::AddressHashes::IRenderProxy_sub_A8);
    return func(this, a1);
}

RED4EXT_INLINE void IRenderProxy::sub_B0(void* a1)
{
    static const UniversalRelocFunc<void (*)(IRenderProxy*, void*)> func(Detail::AddressHashes::IRenderProxy_sub_B0);
    func(this, a1);
}

RED4EXT_INLINE bool IRenderProxy::sub_B8()
{
    return false;
}

RED4EXT_INLINE bool IRenderProxy::sub_C0()
{
    return false;
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_C8()
{
    return 0;
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_D0()
{
    return 0;
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_D8()
{
    return 0;
}

RED4EXT_INLINE uint8_t IRenderProxy::sub_E0()
{
    return 0;
}

RED4EXT_INLINE void IRenderProxy::sub_E8()
{
}

RED4EXT_INLINE void IRenderProxy::sub_F0()
{
}
} // namespace RED4ext
