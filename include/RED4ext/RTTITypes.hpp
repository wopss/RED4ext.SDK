#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Types/InstanceType.hpp>
#include <RED4ext/Unks.hpp>

namespace RED4ext
{
struct IMemoryAllocator;
struct CProperty;
struct CClassFunction;
struct CClassStaticFunction;

enum class ERTTIType : uint8_t
{
    Name = 0,
    Fundamental = 1,
    Class = 2,
    Array = 3,
    Simple = 4,
    Enum = 5,
    StaticArray = 6,
    NativeArray = 7,
    Pointer = 8,
    Handle = 9,
    WeakHandle = 10,
    ResourceReference = 11,
    ResourceAsyncReference = 12,
    BitField = 13,
    LegacySingleChannelCurve = 14,
    ScriptReference = 15,
};

struct IRTTIType
{
    virtual ~IRTTIType() = 0; // 00

    virtual void GetName(CName& aOut) const = 0;                                    // 08
    virtual uint32_t GetSize() const = 0;                                           // 10
    virtual uint32_t GetAlignment() const = 0;                                      // 18
    virtual ERTTIType GetType() const = 0;                                          // 20
    virtual void GetTypeName(CString& aOut) const = 0;                              // 28
    virtual void GetName2(CName& aOut) const = 0;                                   // 30
    virtual void Init(void* aMemory) const = 0;                                     // 38
    virtual void Destroy(void* aMemory) const = 0;                                  // 40
    virtual bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs) = 0; // 48
    virtual void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) = 0;        // 50
    virtual void sub_58(ScriptInstance aLhs, const ScriptInstance aRhs) = 0;        // 58 This usually call "Assign".
    virtual void sub_60() = 0;                                                      // 60
    virtual bool GetDebugString(ScriptInstance aInstance, CString& aOut) const = 0; // 68
    virtual void sub_70() = 0;                                                      // 70
    virtual void sub_78() = 0;                                                      // 78
    virtual void sub_80() = 0;                                                      // 80
    virtual void sub_88() = 0;                                                      // 88
    virtual bool Unk_90(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4) = 0;               // 90
    virtual bool Unk_98(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4, uint8_t unk5) = 0; // 98
    virtual void sub_A0() = 0;                                                                             // A0
    virtual bool sub_A8() = 0;                                                                             // A8
    virtual void sub_B0() = 0;                                                                             // B0
    virtual IMemoryAllocator* GetAllocator() const = 0;                                                    // B8
};
RED4EXT_ASSERT_SIZE(IRTTIType, 0x8);

struct CRTTIType : IRTTIType
{
    int64_t unk8;
};
RED4EXT_ASSERT_SIZE(CRTTIType, 0x10);

struct CArrayBase : CRTTIType
{
    virtual CRTTIType* GetInnerType() const = 0;                                            // C0
    virtual bool sub_C8() = 0;                                                              // C8 ret 1
    virtual uint32_t GetLength(ScriptInstance aInstance) const = 0;                         // D0
    virtual int32_t GetMaxLength() const = 0;                                               // D8 ret -1
    virtual ScriptInstance GetElement(ScriptInstance aInstance, uint32_t aIndex) const = 0; // E0
    virtual ScriptInstance GetValuePointer(ScriptInstance aInstance,
                                           uint32_t aIndex) const = 0; // E8 Same func at 0xE0 ?
    virtual int32_t sub_F0(ScriptInstance aInstance, int32_t aIndex, ScriptInstance aElement) = 0; // F0
    virtual bool sub_F8(ScriptInstance aInstance, int32_t aIndex) = 0;                             // F8
    virtual bool sub_100(ScriptInstance aInstance, int32_t aIndex) = 0;                            // 100
    virtual bool Resize(ScriptInstance aInstance, uint32_t aSize) = 0;                             // 108
};

struct CArray : CArrayBase
{
    CRTTIType* innerType; // 10
    CName name;           // 18
    CRTTIType* parent;    // 20
    uintptr_t unk28;      // 28
    uintptr_t unk30;      // 30
    uintptr_t unk38;      // 38
};
RED4EXT_ASSERT_SIZE(CArray, 0x40);
RED4EXT_ASSERT_OFFSET(CArray, parent, 0x20);

struct CStaticArray : CArrayBase
{
    CRTTIType* innerType; // 10
    int32_t size;         // 18
    uint32_t pad1C;       // 1C
    CName name;           // 20
    CName unk28;          // 28
};
RED4EXT_ASSERT_SIZE(CStaticArray, 0x30);

struct CNativeArray : CArrayBase
{
    CRTTIType* innerType; // 10
    int32_t size;         // 18
    uint32_t pad1C;       // 1C
    CName name;           // 20
    CName unk28;          // 28
};
RED4EXT_ASSERT_SIZE(CNativeArray, 0x30);

struct CHandle : CRTTIType
{
    virtual CRTTIType* GetInnerType() const = 0;       // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8

    CRTTIType* innerType; // 10
    CName name;           // 18
    CName unk20;          // 20
};
RED4EXT_ASSERT_SIZE(CHandle, 0x28);

struct CWeakHandle : CRTTIType
{
    virtual CRTTIType* GetInnerType() const = 0;       // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8 - Empty impl

    CRTTIType* innerType; // 10
    CName name;           // 18
    CName unk20;          // 20
};
RED4EXT_ASSERT_SIZE(CWeakHandle, 0x28);

struct CResourceAsyncReference : CRTTIType
{
    CName name;           // 10
    CName unk18;          // 18
    CRTTIType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CResourceAsyncReference, 0x28);

struct CResourceReference : CRTTIType
{
    CName name;           // 10
    CName unk18;          // 18
    CRTTIType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CResourceReference, 0x28);

struct CLegacySingleChannelCurve : CRTTIType
{
    CName name;           // 10
    uint64_t unk18;       // 18
    uint64_t unk20;       // 20
    uint64_t unk28;       // 28
    uint8_t unk30;        // 30
    uint8_t unk31;        // 31
    uint16_t pad32;       // 32
    uint32_t pad34;       // 34
    CRTTIType* curveType; // 38
    uint16_t unk40;       // 40
    uint16_t pad42;       // 42
    uint32_t pad44;       // 44
};
RED4EXT_ASSERT_SIZE(CLegacySingleChannelCurve, 0x48);

struct CBitfield : CRTTIType
{
    CName hash;         // 10
    CName unk18;        // 18
    uint8_t size;       // 20 - Size in bytes the instance will use
    uint8_t flags;      // 21
    uint16_t unk22;     // 22
    uint32_t unk24;     // 24
    uint64_t validBits; // 28
    CName bitNames[64]; // 30
};
RED4EXT_ASSERT_SIZE(CBitfield, 0x230);
RED4EXT_ASSERT_OFFSET(CBitfield, bitNames, 0x30);

struct CClass : CRTTIType
{
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;
    virtual void sub_D0() = 0;
    virtual void InitCls(IScriptable* aMemory) = 0;
    virtual void DestroyCls(IScriptable* aMemory) = 0;
    virtual void sub_E8() = 0;

    struct Flags
    {
        uint32_t isAbstract : 1;   // 00
        uint32_t isNative : 1;     // 01
        uint32_t b2 : 1;           // 02
        uint32_t b3 : 1;           // 03
        uint32_t isStruct : 1;     // 04
        uint32_t b5 : 1;           // 05
        uint32_t isImportOnly : 1; // 06
        uint32_t isPrivate : 1;    // 07
        uint32_t isProtected : 1;  // 08
        uint32_t isTestOnly : 1;   // 09
        uint32_t b10 : 22;
    };
    RED4EXT_ASSERT_SIZE(CClass::Flags, 0x4);

    IScriptable* AllocInstance();

    bool IsA(const IRTTIType* aType) const;

    CProperty* GetProperty(CName aName);
    CClassFunction* GetFunction(CName aName);

    void RegisterFunction(CClassFunction* aFunc);

    CClass* parent;                           // 10
    CName name;                               // 18
    CName name2;                              // 20
    DynArray<CProperty*> props;               // 28
    DynArray<CProperty*> unk38;               // 38
    DynArray<CClassFunction*> funcs;          // 48
    DynArray<CClassFunction*> staticFuncs;    // 58
    uint32_t size;                            // 68 The size of the real class that can be constructed.
    int32_t holderSize;                       // 6C
    Flags flags;                              // 70
    uint32_t alignment;                       // 74
    int64_t unk78;                            // 78
    int64_t unk80;                            // 80
    int64_t unk88;                            // 88
    int64_t unk90;                            // 90
    int32_t unk98;                            // 98
    int32_t unk9C;                            // 9C
    int64_t unkA0;                            // A0
    HashMap<uint64_t, CClassFunction*> unkA8; // A8
    int64_t unkD8;                            // D8
    int64_t unkE0;                            // E0
    HashMap<uint64_t, CProperty*> unkE8;      // E8
    DynArray<CProperty*> unk118;              // 118 More entries than 0x28, will contain native props
    DynArray<void*> unk128;                   // 128
    DynArray<CProperty*> unk138;              // 138 Only RT_Class types?
    DynArray<void*> unk148;                   // 148
    DynArray<CProperty*> unk158;              // 158 Scripted props?
    DynArray<void*> unk168;                   // 168
    int64_t unk178;                           // 178
    DynArray<void*> unk180;                   // 180
    int8_t unk190[256];                       // 190
    int16_t unk290;                           // 290
    int32_t unk294;                           // 294
    int8_t unk298;                            // 298
    int8_t unk299;                            // 299
};
RED4EXT_ASSERT_SIZE(CClass, 0x2A0);
RED4EXT_ASSERT_OFFSET(CClass, parent, 0x10);
RED4EXT_ASSERT_OFFSET(CClass, name, 0x18);
RED4EXT_ASSERT_OFFSET(CClass, funcs, 0x48);
RED4EXT_ASSERT_OFFSET(CClass, staticFuncs, 0x58);
RED4EXT_ASSERT_OFFSET(CClass, unkA0, 0xA0);
RED4EXT_ASSERT_OFFSET(CClass, unkE0, 0xE0);

struct CEnum : CRTTIType
{
    CName hash;                   // 10
    CName unk18;                  // 18
    uint8_t size;                 // 20 - Size in bytes the instance will use
    uint8_t flags;                // 21
    uint16_t unk22;               // 22
    uint32_t unk24;               // 24
    DynArray<CName> hashList;     // 28
    DynArray<uint64_t> valueList; // 38
    DynArray<CName> unk48;        // 48
    DynArray<uint64_t> unk58;     // 58
};
RED4EXT_ASSERT_SIZE(CEnum, 0x68);
RED4EXT_ASSERT_OFFSET(CEnum, hashList, 0x28);

struct BoolType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(BoolType, 0x10);

struct Int8Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Int8Type, 0x10);

struct Uint8Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Uint8Type, 0x10);

struct Int16Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Int16Type, 0x10);

struct Uint16Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Uint16Type, 0x10);

struct Int32Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Int32Type, 0x10);

struct Uint32Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Uint32Type, 0x10);

struct Int64Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Int32Type, 0x10);

struct Uint64Type : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(Uint64Type, 0x10);

struct FloatType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(FloatType, 0x10);

struct DoubleType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(DoubleType, 0x10);

struct StringType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(StringType, 0x10);

struct CNameType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(CNameType, 0x10);

struct CDateTimeType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(CDateTimeType, 0x10);

struct CGUIDType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(CGUIDType, 0x10);

struct CRUIDType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(CRUIDType, 0x10);

struct CRUIDRefType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(CRUIDRefType, 0x10);

struct TweakDBIDType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(TweakDBIDType, 0x10);

struct EditorObjectIDType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(EditorObjectIDType, 0x10);

struct VariantType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(VariantType, 0x10);

struct DataBufferType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(DataBufferType, 0x10);

struct SharedDataBufferType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(SharedDataBufferType, 0x10);

struct serializationDeferredDataBufferType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(serializationDeferredDataBufferType, 0x10);

struct gamedataLocKeyWrapperType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(gamedataLocKeyWrapperType, 0x10);

struct LocalizationStringType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(LocalizationStringType, 0x10);

struct MessageResourcePathType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(MessageResourcePathType, 0x10);

struct NodeRefType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(NodeRefType, 0x10);

struct RuntimeEntityRefType : CRTTIType
{
};
RED4EXT_ASSERT_SIZE(RuntimeEntityRefType, 0x10);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTITypes-inl.hpp>
#endif
