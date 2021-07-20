#pragma once

#include <Windows.h>
#include <cstdint>

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/RTTITypes.hpp>

namespace RED4ext
{
struct CBaseFunction;
struct CGlobalFunction;

struct IRTTISystem
{
    virtual IRTTIType* GetType(CName aName) = 0;                                               // 00
    virtual IRTTIType* GetTypeByAsyncId(uint32_t aAsyncId) = 0;                                // 08
    virtual CClass* GetClass(CName aName) = 0;                                                 // 10
    virtual CEnum* GetEnum(CName aName) = 0;                                                   // 18
    virtual CBitfield* GetBitField(CName aName) = 0;                                           // 20
    virtual void sub_28() = 0;                                                                 // 28
    virtual CGlobalFunction* GetFunction(CName aName) = 0;                                     // 30
    virtual void sub_38() = 0;                                                                 // 38
    virtual void sub_40() = 0;                                                                 // 40
    virtual void sub_48() = 0;                                                                 // 48
    virtual void sub_50() = 0;                                                                 // 50
    virtual void sub_58() = 0;                                                                 // 58
    virtual void sub_60() = 0;                                                                 // 60
    virtual void sub_68() = 0;                                                                 // 68
    virtual void sub_70() = 0;                                                                 // 70
    virtual void sub_78() = 0;                                                                 // 78
    virtual bool RegisterType(IRTTIType* aType, uint32_t aAsyncId) = 0;                        // 80
    virtual void sub_88() = 0;                                                                 // 88
    virtual void sub_90() = 0;                                                                 // 90
    virtual void RegisterFunction(CGlobalFunction* aFunc) = 0;                                 // 98
    virtual void sub_A0() = 0;                                                                 // A0
    virtual void sub_A8() = 0;                                                                 // A8
    virtual void sub_B0() = 0;                                                                 // B0
    virtual void sub_B8() = 0;                                                                 // B8
    virtual void sub_C0() = 0;                                                                 // C0
    virtual void sub_C8() = 0;                                                                 // C8
    virtual void RegisterScriptedType(CName aName, CClass::Flags aFlags, CClass* aParent) = 0; // D0
    virtual void sub_D8() = 0;                                                                 // D8
    virtual void sub_E0() = 0;                                                                 // E0
    virtual void sub_E8() = 0;                                                                 // E8
    virtual void RegisterScriptName(CName aNativeName, CName aScriptedName) = 0;               // F0
    virtual void sub_F8() = 0;                                                                 // F8
    virtual void sub_100() = 0;                                                                // 100
    virtual CName ConvertNativeToScriptName(CName aNativeName) = 0;                            // 108
    virtual void sub_110() = 0;                                                                // 110

    virtual ~IRTTISystem() = 0; // 118
};
RED4EXT_ASSERT_SIZE(IRTTISystem, 0x8);

struct CRTTISystem : IRTTISystem
{
    static CRTTISystem* Get();

    uint64_t unk08;                          // 08
    HashMap<CName, IRTTIType*> types;        // 10
    HashMap<uint64_t, IRTTIType*> typeByIds; // 40
    HashMap<CName, uint64_t> typeIds;        // 70
    HashMap<CName, CGlobalFunction*> funcs;  // A0
    HashMap<CName, CBaseFunction*> unkC8;    // D0
    HashMap<CName, CName> unkF8;             // 100
    DynArray<void*> unk130;                  // 130
    DynArray<void*> unk140;                  // 140
    HashMap<CName, CName> scriptToNative;    // 150
    HashMap<CName, CName> nativeToScript;    // 180
    DynArray<void*> unk1B0;                  // 1B0
    DynArray<void*> unk1C0;                  // 1C0
    CRITICAL_SECTION unk1D0;                 // 1D0
    uint8_t unk1F8;                          // 1F8
    CRITICAL_SECTION unk200;                 // 200
};
RED4EXT_ASSERT_SIZE(CRTTISystem, 0x228);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTISystem-inl.hpp>
#endif
