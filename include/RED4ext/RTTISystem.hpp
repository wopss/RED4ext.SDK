#pragma once

#include <Windows.h>
#include <cstdint>

#include <RED4ext/CName.hpp>
#include <RED4ext/Callback.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Mutex.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/SharedSpinLock.hpp>

namespace RED4ext
{
struct CBaseFunction;
struct CGlobalFunction;

struct IRTTISystem
{
    virtual CBaseRTTIType* GetType(CName aName) = 0;                                             // 00
    virtual CBaseRTTIType* GetTypeByAsyncId(uint32_t aAsyncId) = 0;                              // 08
    virtual CClass* GetClass(CName aName) = 0;                                                   // 10
    virtual CEnum* GetEnum(CName aName) = 0;                                                     // 18
    virtual CBitfield* GetBitfield(CName aName) = 0;                                             // 20
    virtual void sub_28() = 0;                                                                   // 28
    virtual CGlobalFunction* GetFunction(CName aName) = 0;                                       // 30
    virtual void sub_38() = 0;                                                                   // 38
    virtual void GetNativeTypes(DynArray<CBaseRTTIType*>& aTypes) = 0;                           // 40
    virtual void GetGlobalFunctions(DynArray<CBaseFunction*>& aFunctions) = 0;                   // 48
    virtual void sub_50() = 0;                                                                   // 50
    virtual void GetClassFunctions(DynArray<CBaseFunction*>& aFunctions) = 0;                    // 58
    virtual void GetEnums(DynArray<CEnum*>& aEnums, bool aScriptedOnly = false) = 0;             // 60
    virtual void GetBitfields(DynArray<CBitfield*>& aBitfields, bool aScriptedOnly = false) = 0; // 68
    virtual void GetClasses(CClass* aIsAClass, DynArray<CClass*>& aClasses, bool (*aFilter)(CClass*) = nullptr,
                            bool aIncludeAbstract = false) = 0;                               // 70
    virtual void GetDerivedClasses(CClass* aBaseClass, DynArray<CClass*>& aClasses) = 0;      // 78
    virtual void RegisterType(CBaseRTTIType* aType, uint32_t aAsyncId) = 0;                   // 80
    virtual void sub_88() = 0;                                                                // 88
    virtual void sub_90() = 0;                                                                // 90 - added in 2.0
    virtual void UnregisterType(CBaseRTTIType* aType) = 0;                                    // 98
    virtual void RegisterFunction(CGlobalFunction* aFunc) = 0;                                // A0
    virtual void UnregisterFunction(CGlobalFunction* aFunc) = 0;                              // A8
    virtual void sub_B0() = 0;                                                                // B0
    virtual void sub_B8() = 0;                                                                // B8 - added in 2.0
    virtual void AddRegisterCallback(Callback<void (*)()>) = 0;                               // C0
    virtual void AddPostRegisterCallback(Callback<void (*)()>) = 0;                           // C8
    virtual void sub_D0() = 0;                                                                // D0
    virtual void sub_D8() = 0;                                                                // D8
    virtual void CreateScriptedClass(CName aName, CClass::Flags aFlags, CClass* aParent) = 0; // E0
    virtual void CreateScriptedEnum(
        CName aName, int8_t aSize,
        DynArray<uint64_t>& aMembers) = 0; // E8 - The members array is not of type "uint64_t", it is a struct
                                           // containing the name and the value of the enumerator.
    virtual void CreateScriptedBitfield(
        CName aName, DynArray<uint64_t>& aBits) = 0; // F0 - The bits array is not of type "uint64_t", it is a struct
                                                     // containing the name and the bit.
    virtual void InitializeScriptRuntime() = 0;      // F8 - Called by script loader at the very end
    virtual void RegisterScriptName(CName aNativeName, CName aScriptedName) = 0; // 100
    virtual CClass* GetClassByScriptName(CName aName) = 0;                       // 108
    virtual CEnum* GetEnumByScriptName(CName aName) = 0;                         // 110
    virtual CName ConvertNativeToScriptName(CName aName) = 0;                    // 118
    virtual CName ConvertScriptToNativeName(CName aName) = 0;                    // 120
    virtual CString* GetStringConst(uint32_t aIndex) = 0;         // 128 - Used by StringConst opcode (0x10)
    virtual void SetStringTable(DynArray<CString>& aStrings) = 0; // 130 - Called by script loader

    virtual ~IRTTISystem() = 0; // 138
};
RED4EXT_ASSERT_SIZE(IRTTISystem, 0x8);

struct CRTTISystem : IRTTISystem
{
    static CRTTISystem* Get();

    using IRTTISystem::RegisterType;
    void RegisterType(CBaseRTTIType* aType);

    int32_t unk8;                                     // 08
    HashMap<CName, CBaseRTTIType*> types;             // 10
    HashMap<uint64_t, CBaseRTTIType*> typesByAsyncId; // 40
    HashMap<CName, uint32_t> typeAsyncIds;            // 70
    HashMap<CName, CGlobalFunction*> funcs;           // A0
    HashMap<uint64_t, CGlobalFunction*> funcsByHash;  // D0
    HashMap<void*, void*> unkF8;                      // F8
    DynArray<void*> unk130;                           // 130
    DynArray<void*> unk140;                           // 140
    HashMap<CName, CName> scriptToNative;             // 150
    HashMap<CName, CName> nativeToScript;             // 180
    DynArray<CString> strings;                        // 1B0 - Used by StringConst opcode (0x10)
    DynArray<void*> unk1C0;                           // 1C0
    DynArray<void*> unk1D0;                           // 1D0
    Mutex unk1E0;                                     // 1E0
    SharedSpinLock typesLock;                         // 208
    Mutex rttiRegistratorMutex;                       // 210
};
RED4EXT_ASSERT_SIZE(CRTTISystem, 0x238);
RED4EXT_ASSERT_OFFSET(CRTTISystem, types, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTISystem, funcs, 0xA0);
RED4EXT_ASSERT_OFFSET(CRTTISystem, scriptToNative, 0x150);
RED4EXT_ASSERT_OFFSET(CRTTISystem, nativeToScript, 0x180);

struct RTTIRegistrator
{
    typedef void (*CallbackFunc)(void);

    [[deprecated("Use 'AddRegisterCallback()' and `AddPostRegisterCallback()` instead.")]]
    static void Add(CallbackFunc aRegFunc, CallbackFunc aPostRegFunc, bool aUnused = true);

    /**
     * @brief Returns the next unique identifier used for RTTI types.
     * @return The unique identifier.
     *
     * @note Every type in RED4 has a unique identifier assigned to it, reusing the IDs manually might lead to a crash,
     * thus we are using the game's counter to create our own types.
     */
    static const uint32_t GetNextId();
};
RED4EXT_ASSERT_SIZE(RTTIRegistrator, 0x01);

} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTISystem-inl.hpp>
#endif
