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
#include <RED4ext/ERTTIType.hpp>
#include <RED4ext/IO/BaseStream.hpp>

namespace RED4ext::rtti {

struct IType
{
    IType();
    virtual ~IType() = default; // 00

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
RED4EXT_ASSERT_SIZE(IType, 0x10);

}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/rtti/IType-inl.hpp>
#endif
