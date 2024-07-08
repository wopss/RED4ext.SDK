#pragma once

#include <type_traits>

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Callback.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Map.hpp>
#include <RED4ext/Utils.hpp>

namespace RED4ext
{
struct BaseStream;
struct CProperty;
struct CClassFunction;
struct CClassStaticFunction;
struct Variant;

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
    FixedArray = 16
};

struct CBaseRTTIType
{
    CBaseRTTIType();
    virtual ~CBaseRTTIType() = default; // 00

    virtual CName GetName() const = 0;                        // 08
    virtual uint32_t GetSize() const = 0;                     // 10
    virtual uint32_t GetAlignment() const = 0;                // 18
    virtual ERTTIType GetType() const = 0;                    // 20
    virtual CString GetTypeName() const;                      // 28
    virtual CName GetComputedName() const;                    // 30
    virtual void Construct(ScriptInstance aMemory) const = 0; // 38
    virtual void Destruct(ScriptInstance aMemory) const = 0;  // 40
    virtual const bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs,
                               uint32_t a3 = 0) = 0; // 48 - Not const because CClass aquire some mutex when this is
                                                     // called and a flag is modified.
    virtual void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const = 0;                 // 50
    virtual void Move(ScriptInstance aLhs, ScriptInstance aRhs) const;                             // 58
    virtual bool Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const = 0; // 60
    virtual bool ToString(const ScriptInstance aInstance, CString& aOut) const;                    // 68
    virtual bool FromString(ScriptInstance aInstance, const CString& aString) const;               // 70
    virtual bool sub_78();                                                                         // 78
    virtual bool sub_80(int64_t a1, ScriptInstance aInstance);                                     // 80
    virtual bool sub_88(int64_t a1, ScriptInstance aInstance);                                     // 88
    virtual bool sub_90(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4);            // 90
    virtual bool sub_98(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4, bool a5);   // 98
    virtual bool sub_A0(int64_t a1, CString& a2, bool a3);                                         // A0
    virtual bool sub_A8();                                                                         // A8
    virtual void sub_B0(int64_t a1, int64_t a2);                                                   // B0
    virtual Memory::IAllocator* GetAllocator() const;                                              // B8

    [[deprecated("Use 'GetName()' instead.")]]
    inline void GetName(CName& aOut) const
    {
        aOut = GetName();
    }

    [[deprecated("Use 'GetComputedName()' instead.")]]
    inline CName GetName2() const
    {
        return GetComputedName();
    }

    [[deprecated("Use 'GetComputedName()' instead.")]]
    inline void GetName2(CName& aOut) const
    {
        aOut = GetComputedName();
    }

    [[deprecated("Use 'GetTypeName()' instead.")]]
    inline void GetTypeName(CString& aOut) const
    {
        auto name = GetTypeName();
        aOut = name;
    }

    [[deprecated("Use 'Construct()' instead.")]]
    inline void Init(ScriptInstance aMemory) const
    {
        Construct(aMemory);
    }

    [[deprecated("Use 'Destruct()' instead.")]]
    inline void Destroy(ScriptInstance aMemory) const
    {
        Destruct(aMemory);
    }

    int64_t unk8;
};
RED4EXT_ASSERT_SIZE(CBaseRTTIType, 0x10);

struct CClass : CBaseRTTIType
{
    struct Flags
    {
        uint32_t isAbstract : 1;                      // 00
        uint32_t isNative : 1;                        // 01
        uint32_t isScriptedClass : 1;                 // 02
        uint32_t isScriptedStruct : 1;                // 03
        uint32_t hasNoDefaultObjectSerialization : 1; // 04
        uint32_t isAlwaysTransient : 1;               // 05
        uint32_t isImportOnly : 1;                    // 06
        uint32_t isPrivate : 1;                       // 07
        uint32_t isProtected : 1;                     // 08
        uint32_t isTestOnly : 1;                      // 09
        uint32_t isSavable : 1;                       // 0A
        uint32_t b10 : 21;                            // 0B
    };
    RED4EXT_ASSERT_SIZE(CClass::Flags, 0x4);

    struct Listener
    {
        Callback<void (*)(IScriptable&, Handle<IScriptable>&), 16> callback; // 00
        CName callbackName;                                                  // 18
        int16_t eventTypeId;                                                 // 20
        bool isScripted;                                                     // 22
    };
    RED4EXT_ASSERT_SIZE(CClass::Listener, 0x28);
    RED4EXT_ASSERT_OFFSET(CClass::Listener, callbackName, 0x18);
    RED4EXT_ASSERT_OFFSET(CClass::Listener, isScripted, 0x22);

    CClass(CName aName, uint32_t aSize, Flags aFlags);

    CName GetName() const final;                                                               // 08
    uint32_t GetSize() const final;                                                            // 10
    uint32_t GetAlignment() const final;                                                       // 18
    ERTTIType GetType() const final;                                                           // 20
    CName GetComputedName() const final;                                                       // 30
    void Construct(ScriptInstance aMemory) const final;                                        // 38
    void Destruct(ScriptInstance aMemory) const final;                                         // 40
    bool Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const final;   // 60
    bool ToString(const ScriptInstance aInstance, CString& aOut) const final;                  // 68
    bool sub_80(int64_t a1, ScriptInstance aInstance) final;                                   // 80
    bool sub_88(int64_t a1, ScriptInstance aInstance) final;                                   // 88
    bool sub_90(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4) final;          // 90
    bool sub_98(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4, bool a5) final; // 98
    bool sub_A0(int64_t a1, CString& a2, bool a3) final;                                       // A0
    void sub_B0(int64_t a1, int64_t a2) final;                                                 // B0

    virtual void sub_C0();                                       // C0
    virtual uint32_t GetMaxAlignment() const;                    // C8
    virtual bool sub_D0() const;                                 // D0
    virtual void ConstructCls(ScriptInstance aMemory) const = 0; // D8
    virtual void DestructCls(ScriptInstance aMemory) const = 0;  // E0
    virtual void* AllocMemory() const = 0;                       // E8

    ScriptInstance CreateInstance(bool aZeroMemory = false) const;

    bool IsA(const CBaseRTTIType* aType) const;

    CProperty* GetProperty(CName aName);
    CClassFunction* GetFunction(CName aShortName) const;

    void InitializeProperties(ScriptInstance aInstance);
    void GetProperties(DynArray<CProperty*>& aProps);

    void RegisterFunction(CClassFunction* aFunc);

    void ClearScriptedData();

    [[deprecated("Use 'ConstructCls()' instead.")]]
    inline void InitCls(ScriptInstance aMemory) const
    {
        ConstructCls(aMemory);
    }

    [[deprecated("Use 'DestructCls()' instead.")]]
    inline void DestroyCls(ScriptInstance aMemory) const
    {
        DestructCls(aMemory);
    }

    [[deprecated("Use 'CreateInstance()' instead.")]]
    inline ScriptInstance AllocInstance(bool aZeroMemory = false) const
    {
        return CreateInstance(aZeroMemory);
    }

    CClass* parent;                              // 10
    CName name;                                  // 18
    CName computedName;                          // 20
    DynArray<CProperty*> props;                  // 28
    DynArray<CProperty*> overriddenProps;        // 38
    DynArray<CClassFunction*> funcs;             // 48
    DynArray<CClassStaticFunction*> staticFuncs; // 58
    uint32_t size;                               // 68
    uint32_t holderSize;                         // 6C
    Flags flags;                                 // 70
    uint32_t alignment;                          // 74
    HashMap<CName, CClassFunction*> funcsByName; // 78
    HashMap<void*, void*> unkA8;                 // A8
    int64_t unkD8;                               // D8
    int64_t unkE0;                               // E0
    HashMap<CName, CProperty*> propsByName;      // E8
    DynArray<CProperty*> unk118;                 // 118 - More entries than 0x28, will contain native props
    DynArray<void*> unk128;                      // 128
    DynArray<CProperty*> unk138;                 // 138 - Only RT_Class types?
    DynArray<void*> unk148;                      // 148
    Map<CName, Variant*> defaults;               // 158
    HashMap<void*, void*> unk180;                // 180
    DynArray<Listener> listeners;                // 1B0 - Event listeners
    int8_t listening[256];                       // 1C0 - Bitmask of event types that this class listens to
    int16_t eventTypeId;                         // 2C0 - Assigned to event classes only
    int32_t unk2C4;                              // 2C4
    SharedSpinLock unk2C8;                       // 2C8
    uint8_t unk2C9;                              // 2C9
};
RED4EXT_ASSERT_SIZE(CClass, 0x2D0);
RED4EXT_ASSERT_OFFSET(CClass, parent, 0x10);
RED4EXT_ASSERT_OFFSET(CClass, name, 0x18);
RED4EXT_ASSERT_OFFSET(CClass, props, 0x28);
RED4EXT_ASSERT_OFFSET(CClass, overriddenProps, 0x38);
RED4EXT_ASSERT_OFFSET(CClass, funcs, 0x48);
RED4EXT_ASSERT_OFFSET(CClass, size, 0x68);
RED4EXT_ASSERT_OFFSET(CClass, flags, 0x70);
RED4EXT_ASSERT_OFFSET(CClass, alignment, 0x74);

template<typename T>
struct TTypedClass : CClass
{
    static_assert(std::is_class_v<T>, "T must be a struct or class");
    static_assert(std::is_default_constructible_v<T>, "T must be default-constructible");
    static_assert(std::is_destructible_v<T>, "T must be destructible");

    TTypedClass(CName aName, CClass::Flags aFlags = {.isNative = true})
        : CClass(aName, sizeof(T), aFlags)
    {
    }

    const bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs, uint32_t a3 = 0) final // 48
    {
        // This is doing something extra beside comparing properties, using the native func until we figure it out.
        using func_t = bool (*)(TTypedClass<T>*, const ScriptInstance, const ScriptInstance, uint32_t);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::TTypedClass_IsEqual);
        return func(this, aLhs, aRhs, a3);
    }

    void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const final // 50
    {
        if constexpr (std::is_copy_constructible_v<T>)
        {
            new (aLhs) T(*static_cast<T*>(aRhs));
        }
    }

    void ConstructCls(ScriptInstance aMemory) const final // D8
    {
        new (aMemory) T();
    }

    void DestructCls(ScriptInstance aMemory) const final // E0
    {
        static_cast<T*>(aMemory)->~T();
    }

    void* AllocMemory() const final // E8
    {
        auto classAlignment = GetAlignment();
        auto alignedSize = AlignUp(GetSize(), classAlignment);

        auto allocator = GetAllocator();
        auto allocResult = allocator->AllocAligned(alignedSize, classAlignment);

        std::memset(allocResult.memory, 0, allocResult.size);
        return allocResult.memory;
    }
};
RED4EXT_ASSERT_SIZE(TTypedClass<CName>, sizeof(CClass));

struct CEnum : CBaseRTTIType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CEnum::Flags, 0x01);

    CEnum(CName aName, int8_t aActualSize, Flags aFlags = {});

    CName GetName() const final;                                                                     // 08
    uint32_t GetSize() const final;                                                                  // 10
    uint32_t GetAlignment() const final;                                                             // 18
    ERTTIType GetType() const final;                                                                 // 20
    CName GetComputedName() const final;                                                             // 30
    void Construct(ScriptInstance aMemory) const final;                                              // 38
    void Destruct(ScriptInstance aMemory) const final;                                               // 40
    const bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs, uint32_t a3 = 0) final; // 48
    void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const final;                         // 50
    bool Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const final;         // 60
    bool ToString(const ScriptInstance aInstance, CString& aOut) const final;                        // 68
    bool FromString(ScriptInstance aInstance, const CString& aString) const final;                   // 70

    CName name;                       // 10
    CName computedName;               // 18
    uint8_t actualSize;               // 20
    Flags flags;                      // 21
    DynArray<CName> hashList;         // 28
    DynArray<int64_t> valueList;      // 38
    DynArray<CName> aliasList;        // 48
    DynArray<int64_t> aliasValueList; // 58
};
RED4EXT_ASSERT_SIZE(CEnum, 0x68);
RED4EXT_ASSERT_OFFSET(CEnum, name, 0x10);
RED4EXT_ASSERT_OFFSET(CEnum, computedName, 0x18);
RED4EXT_ASSERT_OFFSET(CEnum, actualSize, 0x20);
RED4EXT_ASSERT_OFFSET(CEnum, flags, 0x21);
RED4EXT_ASSERT_OFFSET(CEnum, hashList, 0x28);
RED4EXT_ASSERT_OFFSET(CEnum, valueList, 0x38);
RED4EXT_ASSERT_OFFSET(CEnum, aliasList, 0x48);
RED4EXT_ASSERT_OFFSET(CEnum, aliasValueList, 0x58);

struct CBitfield : CBaseRTTIType
{
    struct Flags
    {
        uint8_t isScripted : 1; // 00
        uint8_t b2 : 7;
    };
    RED4EXT_ASSERT_SIZE(CBitfield::Flags, 0x01);

    CBitfield(CName aName, int8_t aActualSize, Flags aFlags = {});

    CName GetName() const final;                                                                     // 08
    uint32_t GetSize() const final;                                                                  // 10
    uint32_t GetAlignment() const final;                                                             // 18
    ERTTIType GetType() const final;                                                                 // 20
    CName GetComputedName() const final;                                                             // 30
    void Construct(ScriptInstance aMemory) const final;                                              // 38
    void Destruct(ScriptInstance aMemory) const final;                                               // 40
    const bool IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs, uint32_t a3 = 0) final; // 48
    void Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const final;                         // 50
    bool Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const final;         // 60
    bool ToString(const ScriptInstance aInstance, CString& aOut) const final;                        // 68
    bool FromString(ScriptInstance aInstance, const CString& aString) const final;                   // 70

    CName name;         // 10
    CName computedName; // 18
    uint8_t actualSize; // 20
    Flags flags;        // 21
    uint64_t validBits; // 28
    CName bitNames[64]; // 30
};
RED4EXT_ASSERT_SIZE(CBitfield, 0x230);
RED4EXT_ASSERT_OFFSET(CBitfield, name, 0x10);
RED4EXT_ASSERT_OFFSET(CBitfield, computedName, 0x18);
RED4EXT_ASSERT_OFFSET(CBitfield, actualSize, 0x20);
RED4EXT_ASSERT_OFFSET(CBitfield, flags, 0x21);
RED4EXT_ASSERT_OFFSET(CBitfield, validBits, 0x28);
RED4EXT_ASSERT_OFFSET(CBitfield, bitNames, 0x30);

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
    virtual ScriptInstance sub_E8(ScriptInstance aInstance, uint32_t aIndex) const = 0;     // E8 Same as E0
    virtual int32_t Add(ScriptInstance aInstance, int32_t aCount) const = 0;                // F0
    virtual bool RemoveAt(ScriptInstance aInstance, int32_t aIndex) const = 0;              // F8
    // [1, 2, 3]
    // ArrayRTTI->InsertAt(aIndex: 1);
    // [1, (free), 2, 3]
    // InnerRTTI->Assign(ArrayRTTI->GetElement(1), newValue)
    // [1, newValue, 2, 3]
    virtual bool InsertAt(ScriptInstance aInstance, int32_t aIndex) const = 0; // 100
    virtual bool Resize(ScriptInstance aInstance, uint32_t aSize) const = 0;   // 108

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
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CRTTIScriptReferenceType_ctor);
        func(aMemory, aUnknownArg);

        return (CRTTIScriptReferenceType*)aMemory;
    }

    template<class T>
    void Set(CBaseRTTIType* aBaseType, const T* aValue)
    {
        using func_t = void (*)(CRTTIScriptReferenceType*, CBaseRTTIType*, const T*);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CRTTIScriptReferenceType_Set);
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

struct [[deprecated("Use 'CBaseRTTIType' instead.")]] IRTTIType : CBaseRTTIType
{
};
struct [[deprecated("Use 'CBaseRTTIType' instead.")]] CRTTIBaseType : CBaseRTTIType
{
};
struct [[deprecated("Use 'CBaseRTTIType' instead.")]] CRTTIType : CBaseRTTIType
{
};

struct [[deprecated("Use 'CFundamentalRTTITypeBool' instead.")]] BoolType : CFundamentalRTTITypeBool
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeInt8' instead.")]] Int8Type : CFundamentalRTTITypeInt8
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeUint8' instead.")]] Uint8Type : CFundamentalRTTITypeUint8
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeInt16' instead.")]] Int16Type : CFundamentalRTTITypeInt16
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeUint16' instead.")]] Uint16Type : CFundamentalRTTITypeUint16
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeInt32' instead.")]] Int32Type : CFundamentalRTTITypeInt32
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeUint32' instead.")]] Uint32Type : CFundamentalRTTITypeUint32
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeInt64' instead.")]] Int64Type : CFundamentalRTTITypeInt64
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeUint64' instead.")]] Uint64Type : CFundamentalRTTITypeUint64
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeFloat' instead.")]] FloatType : CFundamentalRTTITypeFloat
{
};
struct [[deprecated("Use 'CFundamentalRTTITypeDouble' instead.")]] DoubleType : CFundamentalRTTITypeDouble
{
};

struct [[deprecated("Use 'CSimpleRTTITypeCName' instead.")]] CNameType : CSimpleRTTITypeCName
{
};
struct [[deprecated("Use 'CSimpleRTTITypeString' instead.")]] StringType : CSimpleRTTITypeString
{
};
struct [[deprecated("Use 'CSimpleRTTITypeLocalizationString' instead.")]] LocalizationStringType
    : CSimpleRTTITypeLocalizationString
{
};
struct [[deprecated("Use 'CSimpleRTTITypeTweakDBID' instead.")]] TweakDBIDType : CSimpleRTTITypeTweakDBID
{
};
struct [[deprecated("Use 'CSimpleRTTITypeDataBuffer' instead.")]] DataBufferType : CSimpleRTTITypeDataBuffer
{
};
struct [[deprecated("Use 'CSimpleRTTITypeSharedDataBuffer' instead.")]] SharedDataBufferType
    : CSimpleRTTITypeSharedDataBuffer
{
};
struct [[deprecated(
    "Use 'CSimpleRTTITypeSerializationDeferredDataBuffer' instead.")]] serializationDeferredDataBufferType
    : CSimpleRTTITypeSerializationDeferredDataBuffer
{
};
struct [[deprecated("Use 'CSimpleRTTITypeVariant' instead.")]] VariantType : CSimpleRTTITypeVariant
{
};
struct [[deprecated("Use 'CSimpleRTTITypeCDateTime' instead.")]] CDateTimeType : CSimpleRTTITypeCDateTime
{
};
struct [[deprecated("Use 'CSimpleRTTITypeCGUID' instead.")]] CGUIDType : CSimpleRTTITypeCGUID
{
};
struct [[deprecated("Use 'CSimpleRTTITypeCRUID' instead.")]] CRUIDType : CSimpleRTTITypeCRUID
{
};
struct [[deprecated("Use 'CSimpleRTTITypeCRUIDRef' instead.")]] CRUIDRefType : CSimpleRTTITypeCRUIDRef
{
};
struct [[deprecated("Use 'CSimpleRTTITypeEditorObjectID' instead.")]] EditorObjectIDType : CSimpleRTTITypeEditorObjectID
{
};
struct [[deprecated("Use 'CSimpleRTTITypeGamedataLocKeyWrapper' instead.")]] gamedataLocKeyWrapperType
    : CSimpleRTTITypeGamedataLocKeyWrapper
{
};
struct [[deprecated("Use 'CSimpleRTTITypeMessageResourcePath' instead.")]] MessageResourcePathType
    : CSimpleRTTITypeMessageResourcePath
{
};
struct [[deprecated("Use 'CSimpleRTTITypeNodeRef' instead.")]] NodeRefType : CSimpleRTTITypeNodeRef
{
};
struct [[deprecated("Use 'CSimpleRTTITypeRuntimeEntityRef' instead.")]] RuntimeEntityRefType
    : CSimpleRTTITypeRuntimeEntityRef
{
};

struct [[deprecated("Use 'CRTTIBaseArrayType' instead.")]] CArrayBase : CRTTIBaseArrayType
{
};
struct [[deprecated("Use 'CRTTIArrayType' instead.")]] CArray : CRTTIArrayType
{
};
struct [[deprecated("Use 'CRTTIStaticArrayType' instead.")]] CStaticArray : CRTTIStaticArrayType
{
};
struct [[deprecated("Use 'CRTTINativeArrayType' instead.")]] CNativeArray : CRTTINativeArrayType
{
};

struct [[deprecated("Use 'CRTTIHandleType' instead.")]] CHandle : CRTTIHandleType
{
};
struct [[deprecated("Use 'CRTTIWeakHandleType' instead.")]] CWeakHandle : CRTTIWeakHandleType
{
};
struct [[deprecated("Use 'CRTTIResourceReferenceType' instead.")]] CResourceReference : CRTTIResourceReferenceType
{
};

struct [[deprecated("Use 'CRTTIResourceAsyncReferenceType' instead.")]] CResourceAsyncReference
    : CRTTIResourceAsyncReferenceType
{
};

struct [[deprecated("Use 'CRTTILegacySingleChannelCurveType' instead.")]] CLegacySingleChannelCurve
    : CRTTILegacySingleChannelCurveType
{
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTITypes-inl.hpp>
#endif
