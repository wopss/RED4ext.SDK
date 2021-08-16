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

struct IRTTIType
{
    virtual ~IRTTIType() = 0; // 00

    virtual CName GetName() const = 0;                                                                     // 08
    virtual uint32_t GetSize() const = 0;                                                                  // 10
    virtual uint32_t GetAlignment() const = 0;                                                             // 18
    virtual ERTTIType GetType() const = 0;                                                                 // 20
    virtual CString GetTypeName() const = 0;                                                               // 28
    virtual CName GetName2() const = 0;                                                                    // 30
    virtual void Init(void* aMemory) const = 0;                                                            // 38
    virtual void Destroy(void* aMemory) const = 0;                                                         // 40
    virtual bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs) = 0;                        // 48
    virtual void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) = 0;                               // 50
    virtual void Move(ScriptInstance aLhs, ScriptInstance aRhs) = 0;                                       // 58
    virtual void Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) = 0;               // 60
    virtual bool GetDebugString(ScriptInstance aInstance, CString& aOut) const = 0;                        // 68
    virtual bool sub_70() = 0;                                                                             // 70
    virtual bool sub_78() = 0;                                                                             // 78
    virtual void sub_80() = 0;                                                                             // 80
    virtual void sub_88() = 0;                                                                             // 88
    virtual bool Unk_90(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4) = 0;               // 90
    virtual bool Unk_98(uintptr_t unk1, uintptr_t unk2, CString& unk3, uintptr_t& unk4, uint8_t unk5) = 0; // 98
    virtual void sub_A0() = 0;                                                                             // A0
    virtual bool sub_A8() = 0;                                                                             // A8
    virtual void sub_B0() = 0;                                                                             // B0
    virtual Memory::IAllocator* GetAllocator() const = 0;                                                  // B8

    inline void [[deprecated("Use 'GetName()' instead.")]] GetName(CName& aOut) const
    {
        aOut = GetName();
    }

    inline void [[deprecated("Use 'GetName2()' instead.")]] GetName2(CName& aOut) const
    {
        aOut = GetName2();
    }

    inline void [[deprecated("Use 'GetTypeName()' instead.")]] GetTypeName(CString& aOut) const
    {
        auto name = GetTypeName();
        aOut = name;
    }
};
RED4EXT_ASSERT_SIZE(IRTTIType, 0x8);

struct CRTTIBaseType : IRTTIType
{
    int64_t unk8;
};
RED4EXT_ASSERT_SIZE(CRTTIBaseType, 0x10);

struct CBitfield : CRTTIBaseType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CBitfield::Flags, 0x01);

    CName hash;         // 10
    CName unk18;        // 18
    uint8_t size;       // 20 - Size in bytes the instance will use
    Flags flags;        // 21
    uint16_t unk22;     // 22
    uint32_t unk24;     // 24
    uint64_t validBits; // 28
    CName bitNames[64]; // 30
};
RED4EXT_ASSERT_SIZE(CBitfield, 0x230);
RED4EXT_ASSERT_OFFSET(CBitfield, bitNames, 0x30);

struct CClass : CRTTIBaseType
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
    uint32_t size;                            // 68 - The size of the real class that can be constructed.
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
    DynArray<CProperty*> unk118;              // 118 - More entries than 0x28, will contain native props
    DynArray<void*> unk128;                   // 128
    DynArray<CProperty*> unk138;              // 138 - Only RT_Class types?
    DynArray<void*> unk148;                   // 148
    DynArray<CProperty*> unk158;              // 158 - Scripted props?
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

struct CEnum : CRTTIBaseType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CEnum::Flags, 0x01);

    CName hash;                   // 10
    CName unk18;                  // 18
    uint8_t size;                 // 20 - Size in bytes the instance will use
    Flags flags;                  // 21
    uint16_t unk22;               // 22
    uint32_t unk24;               // 24
    DynArray<CName> hashList;     // 28
    DynArray<uint64_t> valueList; // 38
    DynArray<CName> unk48;        // 48
    DynArray<uint64_t> unk58;     // 58
};
RED4EXT_ASSERT_SIZE(CEnum, 0x68);
RED4EXT_ASSERT_OFFSET(CEnum, hashList, 0x28);

#pragma region Fundamentals
using CFundamentalRTTITypeBool = CRTTIBaseType;
using CFundamentalRTTITypeInt8 = CRTTIBaseType;
using CFundamentalRTTITypeUint8 = CRTTIBaseType;
using CFundamentalRTTITypeInt16 = CRTTIBaseType;
using CFundamentalRTTITypeUint16 = CRTTIBaseType;
using CFundamentalRTTITypeInt32 = CRTTIBaseType;
using CFundamentalRTTITypeUint32 = CRTTIBaseType;
using CFundamentalRTTITypeInt64 = CRTTIBaseType;
using CFundamentalRTTITypeUint64 = CRTTIBaseType;
using CFundamentalRTTITypeFloat = CRTTIBaseType;
using CFundamentalRTTITypeDouble = CRTTIBaseType;
#pragma endregion

#pragma region Simples
using CSimpleRTTITypeCName = CRTTIBaseType;
using CSimpleRTTITypeString = CRTTIBaseType;
using CSimpleRTTITypeLocalizationString = CRTTIBaseType;
using CSimpleRTTITypeTweakDBID = CRTTIBaseType;
using CSimpleRTTITypeDataBuffer = CRTTIBaseType;
using CSimpleRTTITypeSerializationDeferredDataBuffer = CRTTIBaseType;
using CSimpleRTTITypeSharedDataBuffer = CRTTIBaseType;
using CSimpleRTTITypeVariant = CRTTIBaseType;
using CSimpleRTTITypeCDateTime = CRTTIBaseType;
using CSimpleRTTITypeCGUID = CRTTIBaseType;
using CSimpleRTTITypeCRUID = CRTTIBaseType;
using CSimpleRTTITypeCRUIDRef = CRTTIBaseType;
using CSimpleRTTITypeEditorObjectID = CRTTIBaseType;
using CSimpleRTTITypeGamedataLocKeyWrapper = CRTTIBaseType;
using CSimpleRTTITypeMessageResourcePath = CRTTIBaseType;
using CSimpleRTTITypeNodeRef = CRTTIBaseType;
using CSimpleRTTITypeRuntimeEntityRef = CRTTIBaseType;
#pragma endregion

#pragma region Arrays
struct CRTTIBaseArrayType : CRTTIBaseType
{
    virtual CRTTIBaseType* GetInnerType() const = 0;                                        // C0
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
};

struct CRTTIArrayType : CRTTIBaseArrayType
{
    CRTTIBaseType* innerType; // 10
    CName name;               // 18
    CRTTIBaseType* parent;    // 20
    uintptr_t unk28;          // 28
    uintptr_t unk30;          // 30
    uintptr_t unk38;          // 38
};
RED4EXT_ASSERT_SIZE(CRTTIArrayType, 0x40);
RED4EXT_ASSERT_OFFSET(CRTTIArrayType, parent, 0x20);

struct CRTTIStaticArrayType : CRTTIBaseArrayType
{
    CRTTIBaseType* innerType; // 10
    int32_t size;             // 18
    uint32_t pad1C;           // 1C
    CName name;               // 20
    CName unk28;              // 28
};
RED4EXT_ASSERT_SIZE(CRTTIStaticArrayType, 0x30);

struct CRTTINativeArrayType : CRTTIBaseArrayType
{
    CRTTIBaseType* innerType; // 10
    int32_t size;             // 18
    uint32_t pad1C;           // 1C
    CName name;               // 20
    CName unk28;              // 28
};
RED4EXT_ASSERT_SIZE(CRTTINativeArrayType, 0x30);
#pragma endregion

struct CRTTIPointerType : CRTTIBaseType
{
    CRTTIBaseType* innerType; // 10
    CName name;               // 18
    CName unk20;              // 20 - Has "script_ref:" prefix.
};
RED4EXT_ASSERT_SIZE(CRTTIPointerType, 0x28);

struct CRTTIScriptReferenceType : CRTTIBaseType
{
    CRTTIBaseType* innerType; // 10
    int64_t unk18;            // 18
    CName name;               // 20
};
RED4EXT_ASSERT_SIZE(CRTTIPointerType, 0x28);

struct CRTTIHandleType : CRTTIBaseType
{
    virtual CRTTIBaseType* GetInnerType() const = 0;   // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8

    CRTTIBaseType* innerType; // 10
    CName name;               // 18
    CName unk20;              // 20
};
RED4EXT_ASSERT_SIZE(CRTTIHandleType, 0x28);

struct CRTTIWeakHandleType : CRTTIBaseType
{
    virtual CRTTIBaseType* GetInnerType() const = 0;   // C0
    virtual void sub_C8(void* aUnk1, void* aUnk2) = 0; // C8
    virtual void sub_D0(void* aUnk1, void* aUnk2) = 0; // D0
    virtual void sub_D8(void* aUnk1, void* aUnk2) = 0; // D8 - Empty impl

    CRTTIBaseType* innerType; // 10
    CName name;               // 18
    CName unk20;              // 20
};
RED4EXT_ASSERT_SIZE(CRTTIWeakHandleType, 0x28);

struct CRTTIResourceReferenceType : CRTTIBaseType
{
    CName name;               // 10
    CName unk18;              // 18
    CRTTIBaseType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CRTTIResourceReferenceType, 0x28);

struct CRTTIResourceAsyncReferenceType : CRTTIBaseType
{
    CName name;               // 10
    CName unk18;              // 18
    CRTTIBaseType* innerType; // 20
};
RED4EXT_ASSERT_SIZE(CRTTIResourceAsyncReferenceType, 0x28);

struct CRTTILegacySingleChannelCurveType : CRTTIBaseType
{
    CName name;               // 10
    uint64_t unk18;           // 18
    uint64_t unk20;           // 20
    uint64_t unk28;           // 28
    uint8_t unk30;            // 30
    uint8_t unk31;            // 31
    uint16_t pad32;           // 32
    uint32_t pad34;           // 34
    CRTTIBaseType* curveType; // 38
    uint16_t unk40;           // 40
    uint16_t pad42;           // 42
    uint32_t pad44;           // 44
};
RED4EXT_ASSERT_SIZE(CRTTILegacySingleChannelCurveType, 0x48);

struct [[deprecated("Use 'CRTTIBaseType' instead.")]] CRTTIType : CRTTIBaseType{};

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
