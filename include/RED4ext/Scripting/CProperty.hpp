#pragma once

#include <type_traits>

#include <RED4ext/CName.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct CProperty
{
    struct Flags
    {
        uint64_t b0 : 1;            // 00
        uint64_t b1 : 1;            // 01
        uint64_t b2 : 1;            // 02
        uint64_t b3 : 1;            // 03
        uint64_t b4 : 1;            // 04
        uint64_t isScripted : 1;    // 05
        uint64_t isReturn : 1;      // 06
        uint64_t b7 : 1;            // 07
        uint64_t isLocalVar : 1;    // 08
        uint64_t isOut : 1;         // 09
        uint64_t isOptional : 1;    // 0A
        uint64_t b11 : 1;           // 0B
        uint64_t b12 : 1;           // 0C
        uint64_t b13 : 1;           // 0D
        uint64_t isOverriding : 1;  // 0E
        uint64_t b15 : 1;           // 0F
        uint64_t isPrivate : 1;     // 10
        uint64_t isProtected : 1;   // 11
        uint64_t isPublic : 1;      // 12
        uint64_t b19 : 2;           // 13
        uint64_t inValueHolder : 1; // 15 - When true, acquire value from holder
        uint64_t b22 : 5;           // 16
        uint64_t isHandle : 1;      // 1B
        uint64_t isPersistent : 1;  // 1C
        uint64_t b29 : 1;           // 1D
        uint64_t b30 : 1;           // 1E
        uint64_t b31 : 1;           // 1F
        uint64_t b32 : 1;           // 20
        uint64_t isSavable : 1;     // 21
        uint64_t b34 : 30;
    };
    RED4EXT_ASSERT_SIZE(Flags, 0x8);

    CProperty(CBaseRTTIType* aType, const char* aName, CClass* aParent = nullptr, uint32_t aValueOffset = 0,
              const char* aGroup = nullptr, Flags aFlags = {});

    static CProperty* Create(CBaseRTTIType* aType, const char* aName, CClass* aParent = nullptr,
                             uint32_t aValueOffset = 0, const char* aGroup = nullptr, Flags aFlags = {});

    CBaseRTTIType* type;  // 00
    CName name;           // 08
    CName group;          // 10
    CClass* parent;       // 18
    uint32_t valueOffset; // 20
    Flags flags;          // 28

    template<typename T>
    bool IsEqual(ScriptInstance aInstance, T aValue, uint32_t a3 = 0) const
    {
        auto currValue = GetValuePtr<T>(aInstance);

        if constexpr (std::is_pointer_v<T>)
        {
            return type->IsEqual(currValue, aValue, a3);
        }

        return type->IsEqual(currValue, &aValue, a3);
    }

    template<typename T>
    void SetValue(ScriptInstance aInstance, T aValue) const
    {
        auto prevValue = GetValuePtr<T>(aInstance);

        if constexpr (std::is_pointer_v<T>)
        {
            type->Assign(prevValue, aValue);
        }
        else
        {
            type->Assign(prevValue, &aValue);
        }
    }

    template<typename T>
    T GetValue(ScriptInstance aInstance) const
    {
        if constexpr (std::is_pointer_v<T>)
        {
            return GetValuePtr<std::remove_pointer_t<T>>(aInstance);
        }
        else
        {
            return *GetValuePtr<T>(aInstance);
        }
    }

    template<typename T>
    T* GetValuePtr(ScriptInstance aInstance) const
    {
        void* holder = aInstance;
        if (flags.inValueHolder)
        {
            auto scriptable = static_cast<IScriptable*>(aInstance);
            holder = scriptable->GetValueHolder();
        }

        return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(holder) + valueOffset);
    }
};
RED4EXT_ASSERT_SIZE(CProperty, 0x30);
RED4EXT_ASSERT_OFFSET(CProperty, type, 0x0);
RED4EXT_ASSERT_OFFSET(CProperty, name, 0x8);
RED4EXT_ASSERT_OFFSET(CProperty, parent, 0x18);
RED4EXT_ASSERT_OFFSET(CProperty, valueOffset, 0x20);
RED4EXT_ASSERT_OFFSET(CProperty, flags, 0x28);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/CProperty-inl.hpp>
#endif
