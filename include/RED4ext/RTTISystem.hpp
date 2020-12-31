#pragma once

#include <cstdint>
#include <Windows.h>

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/Functions.hpp>

namespace RED4ext
{
struct IRTTISystem
{
    virtual IRTTIType* GetType(CName aName) = 0;
    virtual void GetTypeByAsyncId(uint32_t aAsyncId) = 0;
    virtual CClass* GetClass(CName aName) = 0;
    virtual IRTTIType* GetEnum(CName aName) = 0;
    virtual IRTTIType* BitField(CName aName) = 0;
    virtual void sub_28() = 0;
    virtual CGlobalFunction* GetFunction(CName aName) = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;
    virtual void sub_68() = 0;
    virtual void sub_70() = 0;
    virtual void sub_78() = 0;
    virtual bool RegisterType(IRTTIType* aType, uint32_t aAsyncId) = 0;
    virtual void sub_88() = 0;
    virtual void sub_90() = 0;
    virtual void RegisterFunction(CGlobalFunction* aFunc) = 0;
    virtual void sub_A0() = 0;
    virtual void sub_A8() = 0;
    virtual void sub_B0() = 0;
    virtual void sub_B8() = 0;
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;
    virtual void sub_D0() = 0;
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;
    virtual void sub_108() = 0;

    virtual ~IRTTISystem() = 0;
};
RED4EXT_ASSERT_SIZE(IRTTISystem, 0x8);

struct CRTTISystem : IRTTISystem
{
    static CRTTISystem* Get();

    HashMap<uint64_t, CRTTIType*> types;
    HashMap<void*, void*> typeByIds;
    HashMap<void*, void*> typeIds;
    HashMap<uint64_t, CGlobalFunction*> funcs;
    HashMap<void*, void*> unkC8;
    HashMap<void*, void*> unkF8;
    int64_t unk128;
    DynArray<void*> unk130;
    DynArray<void*> unk140;
    int64_t unk150;
    int64_t unk158;
    int64_t unk160;
    int64_t unk168;
    int32_t unk170;
    int32_t unk174;
    HashMap<void*, void*> unk178;
    int64_t unk1A8;
    DynArray<void*> unk1B0;
    DynArray<void*> unk1C0;
    CRITICAL_SECTION unk1D0;
    uint8_t unk1F8;
    CRITICAL_SECTION unk200;
};
RED4EXT_ASSERT_SIZE(CRTTISystem, 0x228);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTISystem-inl.hpp>
#endif
