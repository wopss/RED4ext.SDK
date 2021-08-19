#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Unks.hpp>

namespace RED4ext
{
struct BaseStream;
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

struct CBaseRTTIType
{
    virtual ~CBaseRTTIType() = default; // 00

    virtual CName GetName() const = 0;                                                                     // 08
    virtual uint32_t GetSize() const = 0;                                                                  // 10
    virtual uint32_t GetAlignment() const = 0;                                                             // 18
    virtual ERTTIType GetType() const = 0;                                                                 // 20
    virtual CString GetTypeName() const = 0;                                                               // 28
    virtual CName GetComputedName() const = 0;                                                             // 30
    virtual void Init(ScriptInstance aMemory) = 0;                                                         // 38
    virtual void Destroy(ScriptInstance aMemory) = 0;                                                      // 40
    virtual const bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs) const = 0;            // 48
    virtual void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) = 0;                               // 50
    virtual void Move(ScriptInstance aLhs, ScriptInstance aRhs) = 0;                                       // 58
    virtual void Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) = 0;               // 60
    virtual bool GetDebugString(ScriptInstance aInstance, CString& aOut) const = 0;                        // 68
    virtual void sub_70() = 0;                                                                             // 70
    virtual void sub_78() = 0;                                                                             // 78
    virtual void sub_80() = 0;                                                                             // 80
    virtual void sub_88() = 0;                                                                             // 88
    virtual bool sub_90(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4) = 0;               // 90
    virtual bool sub_98(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4, uint8_t unk5) = 0; // 98
    virtual void sub_A0() = 0;                                                                             // A0
    virtual void sub_A8() = 0;                                                                             // A8
    virtual void sub_B0() = 0;                                                                             // B0
    virtual Memory::IAllocator* GetAllocator() const = 0;                                                  // B8

    inline void [[deprecated("Use 'GetName()' instead.")]] GetName(CName& aOut) const
    {
        aOut = GetName();
    }

    inline CName [[deprecated("Use 'GetComputedName()' instead.")]] GetName2() const
    {
        return GetComputedName();
    }

    inline void [[deprecated("Use 'GetComputedName()' instead.")]] GetName2(CName& aOut) const
    {
        aOut = GetComputedName();
    }

    inline void [[deprecated("Use 'GetTypeName()' instead.")]] GetTypeName(CString& aOut) const
    {
        auto name = GetTypeName();
        aOut = name;
    }

    int64_t unk8;
};
RED4EXT_ASSERT_SIZE(CBaseRTTIType, 0x10);

struct CBitfield : CBaseRTTIType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CBitfield::Flags, 0x01);

    CName name;         // 10
    int64_t unk18;      // 18
    uint8_t typeSize;   // 20
    Flags flags;        // 21
    uint64_t validBits; // 28
    CName bitNames[64]; // 30
};
RED4EXT_ASSERT_SIZE(CBitfield, 0x230);
RED4EXT_ASSERT_OFFSET(CBitfield, name, 0x10);
RED4EXT_ASSERT_OFFSET(CBitfield, unk18, 0x18);
RED4EXT_ASSERT_OFFSET(CBitfield, typeSize, 0x20);
RED4EXT_ASSERT_OFFSET(CBitfield, flags, 0x21);
RED4EXT_ASSERT_OFFSET(CBitfield, validBits, 0x28);
RED4EXT_ASSERT_OFFSET(CBitfield, bitNames, 0x30);

struct CClass : CBaseRTTIType
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

    bool IsA(const CBaseRTTIType* aType) const;

    CProperty* GetProperty(CName aName);
    CClassFunction* GetFunction(CName aName);

    void RegisterFunction(CClassFunction* aFunc);

    CClass* parent;                              // 10
    CName name;                                  // 18
    CName computedName;                          // 20
    DynArray<CProperty*> props;                  // 28
    DynArray<CProperty*> overriddenProps;        // 38
    DynArray<CClassFunction*> funcs;             // 48
    DynArray<CClassStaticFunction*> staticFuncs; // 58
    uint32_t realSize;                           // 68
    uint32_t holderSize;                         // 6C
    Flags flags;                                 // 70
    uint32_t alignment;                          // 74
    HashMap<void*, void*> unk78;                 // 78
    HashMap<void*, void*> unkA8;                 // A8
    int64_t unkD8;                               // D8
    int64_t unkE0;                               // E0
    HashMap<uint64_t, CProperty*> unkE8;         // E8
    DynArray<CProperty*> unk118;                 // 118 - More entries than 0x28, will contain native props
    DynArray<void*> unk128;                      // 128
    DynArray<CProperty*> unk138;                 // 138 - Only RT_Class types?
    DynArray<void*> unk148;                      // 148
    DynArray<CProperty*> unk158;                 // 158 - Scripted props?
    DynArray<void*> unk168;                      // 168
    int64_t unk178;                              // 178
    HashMap<void*, void*> unk180;                // 180
    DynArray<void*> unk1B0;                      // 1B0
    int8_t unk1C0[256];                          // 1C0
    int16_t unk2C0;                              // 2C0
    int32_t unk2C4;                              // 2C4
    int8_t unk2C8;                               // 2C8
    int8_t unk2C9;                               // 2C9
};
RED4EXT_ASSERT_SIZE(CClass, 0x2D0);
RED4EXT_ASSERT_OFFSET(CClass, parent, 0x10);
RED4EXT_ASSERT_OFFSET(CClass, name, 0x18);
RED4EXT_ASSERT_OFFSET(CClass, props, 0x28);
RED4EXT_ASSERT_OFFSET(CClass, overriddenProps, 0x38);
RED4EXT_ASSERT_OFFSET(CClass, funcs, 0x48);
RED4EXT_ASSERT_OFFSET(CClass, realSize, 0x68);
RED4EXT_ASSERT_OFFSET(CClass, flags, 0x70);
RED4EXT_ASSERT_OFFSET(CClass, alignment, 0x74);

struct CEnum : CBaseRTTIType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CEnum::Flags, 0x01);

    CName name;                   // 10
    CName unk18;                  // 18
    uint8_t typeSize;             // 20
    Flags flags;                  // 21
    DynArray<CName> hashList;     // 28
    DynArray<uint64_t> valueList; // 38
    DynArray<CName> unk48;        // 48
    DynArray<uint64_t> unk58;     // 58
};
RED4EXT_ASSERT_SIZE(CEnum, 0x68);
RED4EXT_ASSERT_OFFSET(CEnum, name, 0x10);
RED4EXT_ASSERT_OFFSET(CEnum, unk18, 0x18);
RED4EXT_ASSERT_OFFSET(CEnum, typeSize, 0x20);
RED4EXT_ASSERT_OFFSET(CEnum, flags, 0x21);
RED4EXT_ASSERT_OFFSET(CEnum, hashList, 0x28);
RED4EXT_ASSERT_OFFSET(CEnum, valueList, 0x38);
RED4EXT_ASSERT_OFFSET(CEnum, unk48, 0x48);
RED4EXT_ASSERT_OFFSET(CEnum, unk58, 0x58);

#pragma region Fundamentals
using CFundamentalRTTITypeBool = CBaseRTTIType;
using CFundamentalRTTITypeInt8 = CBaseRTTIType;
using CFundamentalRTTITypeUint8 = CBaseRTTIType;
using CFundamentalRTTITypeInt16 = CBaseRTTIType;
using CFundamentalRTTITypeUint16 = CBaseRTTIType;
using CFundamentalRTTITypeInt32 = CBaseRTTIType;
using CFundamentalRTTITypeUint32 = CBaseRTTIType;
using CFundamentalRTTITypeInt64 = CBaseRTTIType;
using CFundamentalRTTITypeUint64 = CBaseRTTIType;
using CFundamentalRTTITypeFloat = CBaseRTTIType;
using CFundamentalRTTITypeDouble = CBaseRTTIType;
#pragma endregion

#pragma region Simples
using CSimpleRTTITypeCName = CBaseRTTIType;
using CSimpleRTTITypeString = CBaseRTTIType;
using CSimpleRTTITypeLocalizationString = CBaseRTTIType;
using CSimpleRTTITypeTweakDBID = CBaseRTTIType;
using CSimpleRTTITypeDataBuffer = CBaseRTTIType;
using CSimpleRTTITypeSerializationDeferredDataBuffer = CBaseRTTIType;
using CSimpleRTTITypeSharedDataBuffer = CBaseRTTIType;
using CSimpleRTTITypeVariant = CBaseRTTIType;
using CSimpleRTTITypeCDateTime = CBaseRTTIType;
using CSimpleRTTITypeCGUID = CBaseRTTIType;
using CSimpleRTTITypeCRUID = CBaseRTTIType;
using CSimpleRTTITypeCRUIDRef = CBaseRTTIType;
using CSimpleRTTITypeEditorObjectID = CBaseRTTIType;
using CSimpleRTTITypeGamedataLocKeyWrapper = CBaseRTTIType;
using CSimpleRTTITypeMessageResourcePath = CBaseRTTIType;
using CSimpleRTTITypeNodeRef = CBaseRTTIType;
using CSimpleRTTITypeRuntimeEntityRef = CBaseRTTIType;
#pragma endregion

#pragma region Arrays
struct CRTTIBaseArrayType : CBaseRTTIType
{
    virtual CBaseRTTIType* GetInnerType() const = 0;                                        // C0
    virtual bool sub_C8() = 0;                                                              // C8 ret 1
    virtual uint32_t GetLength(ScriptInstance aInstance) const = 0;                         // D0
    virtual int32_t GetMaxLength() const = 0;                                               // D8 ret -1
    virtual ScriptInstance GetElement(ScriptInstance aInstance, uint32_t aIndex) const = 0; // E0
    virtual ScriptInstance GetValuePointer(ScriptInstance aInstance,
                                           uint32_t aIndex) const = 0; // E8 Same func at 0xE0 ?
    virtual int32_t sub_F0(ScriptInstance aInstance, int32_t aIndex, ScriptInstance aElement) = 0; // F0
    virtual bool RemoveAt(ScriptInstance aInstance, int32_t aIndex) = 0;                           // F8
    // [1, 2, 3]
    // RTTI->InsertAt(aIndex: 1);
    // [1, 2 (freed/destroyed), 2, 3]
    // InnerRTTI->Assign(RTTI->GetElement(aIndex: 1), newValue)
    // [1, newValue, 2, 3]
    virtual bool InsertAt(ScriptInstance aInstance, int32_t aIndex) = 0; // 100
    virtual bool Resize(ScriptInstance aInstance, uint32_t aSize) = 0;   // 108

    CBaseRTTIType* innerType; // 10
};
RED4EXT_ASSERT_SIZE(CRTTIBaseArrayType, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIBaseArrayType, innerType, 0x10);

struct CRTTIArrayType : CRTTIBaseArrayType
{
    CName name;            // 18
    CBaseRTTIType* parent; // 20
    uintptr_t unk28;       // 28
    uintptr_t unk30;       // 30
    uintptr_t unk38;       // 38
};
RED4EXT_ASSERT_SIZE(CRTTIArrayType, 0x40);
RED4EXT_ASSERT_OFFSET(CRTTIArrayType, parent, 0x20);

struct CRTTIStaticArrayType : CRTTIBaseArrayType
{
    int32_t size;       // 18
    uint32_t pad1C;     // 1C
    CName name;         // 20
    CName computedName; // 28
};
RED4EXT_ASSERT_SIZE(CRTTIStaticArrayType, 0x30);
RED4EXT_ASSERT_OFFSET(CRTTIStaticArrayType, size, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIStaticArrayType, name, 0x20);
RED4EXT_ASSERT_OFFSET(CRTTIStaticArrayType, computedName, 0x28);

struct CRTTINativeArrayType : CRTTIBaseArrayType
{
    int32_t size;       // 18
    uint32_t pad1C;     // 1C
    CName name;         // 20
    CName computedName; // 28
};
RED4EXT_ASSERT_SIZE(CRTTINativeArrayType, 0x30);
RED4EXT_ASSERT_OFFSET(CRTTINativeArrayType, size, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTINativeArrayType, name, 0x20);
RED4EXT_ASSERT_OFFSET(CRTTINativeArrayType, computedName, 0x28);
#pragma endregion

struct CRTTIPointerType : CBaseRTTIType
{
    CBaseRTTIType* innerType; // 10
    CName name;               // 18
    CName unk20;              // 20
};
RED4EXT_ASSERT_SIZE(CRTTIPointerType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIPointerType, innerType, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIPointerType, name, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIPointerType, unk20, 0x20);

struct CRTTIScriptReferenceType : CBaseRTTIType
{
    // No need for a destructor as it doesn't do anything
    static CRTTIScriptReferenceType* New(void* aMemory, void* aUnknownArg = nullptr)
    {
        using func_t = void (*)(void*, void*);
        RelocFunc<func_t> func(Addresses::CRTTIScriptReferenceType_ctor);
        func(aMemory, aUnknownArg);

        return (CRTTIScriptReferenceType*)aMemory;
    }

    template<class T>
    void Set(CBaseRTTIType* aBaseType, const T* aValue)
    {
        using func_t = void (*)(CRTTIScriptReferenceType*, CBaseRTTIType*, const T*);
        RelocFunc<func_t> func(Addresses::CRTTIScriptReferenceType_Set);
        func(this, aBaseType, aValue);
    }

    CBaseRTTIType* innerType; // 10
    int64_t unk18;            // 18
    CName name;               // 20
};
RED4EXT_ASSERT_SIZE(CRTTIScriptReferenceType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIScriptReferenceType, innerType, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIScriptReferenceType, unk18, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIScriptReferenceType, name, 0x20);

struct CRTTIHandleType : CBaseRTTIType
{
    virtual CBaseRTTIType* GetInnerType() const = 0;   // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8

    CBaseRTTIType* innerType; // 10
    CName name;               // 18
    CName computedName;       // 20
};
RED4EXT_ASSERT_SIZE(CRTTIHandleType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIHandleType, innerType, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIHandleType, name, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIHandleType, computedName, 0x20);

struct CRTTIWeakHandleType : CBaseRTTIType
{
    virtual CBaseRTTIType* GetInnerType() const = 0;   // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8 - Empty impl

    CBaseRTTIType* innerType; // 10
    CName name;               // 18
    CName computedName;       // 20
};
RED4EXT_ASSERT_SIZE(CRTTIWeakHandleType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIWeakHandleType, innerType, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIWeakHandleType, name, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIWeakHandleType, computedName, 0x20);

struct CRTTIResourceReferenceType : CBaseRTTIType
{
    CName name;               // 10
    CName computedName;       // 18
    CBaseRTTIType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CRTTIResourceReferenceType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIResourceReferenceType, name, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIResourceReferenceType, computedName, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIResourceReferenceType, innerType, 0x20);

struct CRTTIResourceAsyncReferenceType : CBaseRTTIType
{
    CName name;               // 10
    CName computedName;       // 18
    CBaseRTTIType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CRTTIResourceAsyncReferenceType, 0x28);
RED4EXT_ASSERT_OFFSET(CRTTIResourceAsyncReferenceType, name, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIResourceAsyncReferenceType, computedName, 0x18);
RED4EXT_ASSERT_OFFSET(CRTTIResourceAsyncReferenceType, innerType, 0x20);

struct CRTTILegacySingleChannelCurveType : CBaseRTTIType
{
    CName name;               // 10
    uint64_t unk18;           // 18
    uint64_t unk20;           // 20
    uint64_t unk28;           // 28
    uint8_t unk30;            // 30
    uint8_t unk31;            // 31
    uint16_t pad32;           // 32
    uint32_t pad34;           // 34
    CBaseRTTIType* curveType; // 38
    uint16_t unk40;           // 40
    uint16_t pad42;           // 42
    uint32_t pad44;           // 44
};
RED4EXT_ASSERT_SIZE(CRTTILegacySingleChannelCurveType, 0x48);
RED4EXT_ASSERT_OFFSET(CRTTILegacySingleChannelCurveType, name, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTILegacySingleChannelCurveType, curveType, 0x38);

struct CRTTIMultiChannelCurveType : CBaseRTTIType
{
    CName name;               // 10
    CBaseRTTIType* curveType; // 18
    int64_t unk20;            // 20
    int64_t unk28;            // 28
    int64_t unk30;            // 30
    int64_t unk38;            // 38
    int32_t unk40;            // 40
    int16_t unk44;            // 44
};
RED4EXT_ASSERT_SIZE(CRTTIMultiChannelCurveType, 0x48);
RED4EXT_ASSERT_OFFSET(CRTTIMultiChannelCurveType, name, 0x10);
RED4EXT_ASSERT_OFFSET(CRTTIMultiChannelCurveType, curveType, 0x18);

struct [[deprecated("Use 'CBaseRTTIType' instead.")]] IRTTIType : CBaseRTTIType{};
struct [[deprecated("Use 'CBaseRTTIType' instead.")]] CRTTIBaseType : CBaseRTTIType{};
struct [[deprecated("Use 'CBaseRTTIType' instead.")]] CRTTIType : CBaseRTTIType{};

struct [[deprecated("Use 'CFundamentalRTTITypeBool' instead.")]] BoolType : CFundamentalRTTITypeBool{};
struct [[deprecated("Use 'CFundamentalRTTITypeInt8' instead.")]] Int8Type : CFundamentalRTTITypeInt8{};
struct [[deprecated("Use 'CFundamentalRTTITypeUint8' instead.")]] Uint8Type : CFundamentalRTTITypeUint8{};
struct [[deprecated("Use 'CFundamentalRTTITypeInt16' instead.")]] Int16Type : CFundamentalRTTITypeInt16{};
struct [[deprecated("Use 'CFundamentalRTTITypeUint16' instead.")]] Uint16Type : CFundamentalRTTITypeUint16{};
struct [[deprecated("Use 'CFundamentalRTTITypeInt32' instead.")]] Int32Type : CFundamentalRTTITypeInt32{};
struct [[deprecated("Use 'CFundamentalRTTITypeUint32' instead.")]] Uint32Type : CFundamentalRTTITypeUint32{};
struct [[deprecated("Use 'CFundamentalRTTITypeInt64' instead.")]] Int64Type : CFundamentalRTTITypeInt64{};
struct [[deprecated("Use 'CFundamentalRTTITypeUint64' instead.")]] Uint64Type : CFundamentalRTTITypeUint64{};
struct [[deprecated("Use 'CFundamentalRTTITypeFloat' instead.")]] FloatType : CFundamentalRTTITypeFloat{};
struct [[deprecated("Use 'CFundamentalRTTITypeDouble' instead.")]] DoubleType : CFundamentalRTTITypeDouble{};

struct [[deprecated("Use 'CSimpleRTTITypeCName' instead.")]] CNameType : CSimpleRTTITypeCName{};
struct [[deprecated("Use 'CSimpleRTTITypeString' instead.")]] StringType : CSimpleRTTITypeString{};
struct [[deprecated("Use 'CSimpleRTTITypeLocalizationString' instead.")]] LocalizationStringType
    : CSimpleRTTITypeLocalizationString{};
struct [[deprecated("Use 'CSimpleRTTITypeTweakDBID' instead.")]] TweakDBIDType : CSimpleRTTITypeTweakDBID{};
struct [[deprecated("Use 'CSimpleRTTITypeDataBuffer' instead.")]] DataBufferType : CSimpleRTTITypeDataBuffer{};
struct [[deprecated("Use 'CSimpleRTTITypeSharedDataBuffer' instead.")]] SharedDataBufferType
    : CSimpleRTTITypeSharedDataBuffer{};
struct [[deprecated(
    "Use 'CSimpleRTTITypeSerializationDeferredDataBuffer' instead.")]] serializationDeferredDataBufferType
    : CSimpleRTTITypeSerializationDeferredDataBuffer{};
struct [[deprecated("Use 'CSimpleRTTITypeVariant' instead.")]] VariantType : CSimpleRTTITypeVariant{};
struct [[deprecated("Use 'CSimpleRTTITypeCDateTime' instead.")]] CDateTimeType : CSimpleRTTITypeCDateTime{};
struct [[deprecated("Use 'CSimpleRTTITypeCGUID' instead.")]] CGUIDType : CSimpleRTTITypeCGUID{};
struct [[deprecated("Use 'CSimpleRTTITypeCRUID' instead.")]] CRUIDType : CSimpleRTTITypeCRUID{};
struct [[deprecated("Use 'CSimpleRTTITypeCRUIDRef' instead.")]] CRUIDRefType : CSimpleRTTITypeCRUIDRef{};
struct [[deprecated("Use 'CSimpleRTTITypeEditorObjectID' instead.")]] EditorObjectIDType
    : CSimpleRTTITypeEditorObjectID{};
struct [[deprecated("Use 'CSimpleRTTITypeGamedataLocKeyWrapper' instead.")]] gamedataLocKeyWrapperType
    : CSimpleRTTITypeGamedataLocKeyWrapper{};
struct [[deprecated("Use 'CSimpleRTTITypeMessageResourcePath' instead.")]] MessageResourcePathType
    : CSimpleRTTITypeMessageResourcePath{};
struct [[deprecated("Use 'CSimpleRTTITypeNodeRef' instead.")]] NodeRefType : CSimpleRTTITypeNodeRef{};
struct [[deprecated("Use 'CSimpleRTTITypeRuntimeEntityRef' instead.")]] RuntimeEntityRefType
    : CSimpleRTTITypeRuntimeEntityRef{};

struct [[deprecated("Use 'CRTTIBaseArrayType' instead.")]] CArrayBase : CRTTIBaseArrayType{};
struct [[deprecated("Use 'CRTTIArrayType' instead.")]] CArray : CRTTIArrayType{};
struct [[deprecated("Use 'CRTTIStaticArrayType' instead.")]] CStaticArray : CRTTIStaticArrayType{};
struct [[deprecated("Use 'CRTTINativeArrayType' instead.")]] CNativeArray : CRTTINativeArrayType{};

struct [[deprecated("Use 'CRTTIHandleType' instead.")]] CHandle : CRTTIHandleType{};
struct [[deprecated("Use 'CRTTIWeakHandleType' instead.")]] CWeakHandle : CRTTIWeakHandleType{};
struct [[deprecated("Use 'CRTTIResourceReferenceType' instead.")]] CResourceReference : CRTTIResourceReferenceType{};

struct [[deprecated("Use 'CRTTIResourceAsyncReferenceType' instead.")]] CResourceAsyncReference
    : CRTTIResourceAsyncReferenceType{};

struct [[deprecated("Use 'CRTTILegacySingleChannelCurveType' instead.")]] CLegacySingleChannelCurve
    : CRTTILegacySingleChannelCurveType{};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTITypes-inl.hpp>
#endif
