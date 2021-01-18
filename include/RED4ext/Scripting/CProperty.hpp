#pragma once

#include <type_traits>

#include <RED4ext/CName.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
struct IRTTIType;
struct CClass;

struct CProperty
{
    struct Flags
    {
        uint64_t b0 : 9;           // 00
        uint64_t isOut : 1;        // 09
        uint64_t isOptional : 1;   // 0A
        uint64_t b12 : 5;          // 0B
        uint64_t isPrivate : 1;    // 10
        uint64_t isProtected : 1;  // 11
        uint64_t isPublic : 1;     // 12
        uint64_t b19 : 2;          // 13
        uint64_t b21 : 1;          // 15 - When true, acquire value from holder (isScripted?)
        uint64_t b22 : 5;          // 16
        uint64_t isHandle : 1;     // 1B
        uint64_t isPersistent : 1; // 1C
        uint64_t b29 : 34;
    };
    RED4EXT_ASSERT_SIZE(CProperty::Flags, 0x8);

    IRTTIType* type;      // 00
    CName name;           // 08
    CName group;          // 10
    CClass* parent;       // 18
    uint32_t valueOffset; // 20
    Flags flags;          // 28

    template<typename T>
    bool IsEqual(ScriptInstance aInstance, T aValue)
    {
        auto currValue = GetValuePtr<T>(aInstance);

        if constexpr (std::is_pointer_v<T>)
        {
            return type->IsEqual(currValue, aValue);
        }

        return type->IsEqual(currValue, &aValue);
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

private:
    template<typename T>
    T* GetValuePtr(ScriptInstance aInstance) const
    {
        void* holder = aInstance;
        if (flags.b21)
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
