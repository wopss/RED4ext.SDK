#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct IRTTIType;
struct CClass;

struct CProperty
{
    IRTTIType* type;
    CName name;
    CName group;
    CClass* parent;
    uint32_t valueOffset;

    struct Flags
    {
        uint64_t b0 : 9;
        uint64_t isOut : 1;
        uint64_t isOptional : 1;
        uint64_t b12 : 9;
        uint64_t b21 : 1;
        uint64_t b22 : 43;
    };

    Flags flags;

    template<typename T>
    bool IsEqual(void* aInstance, const T aValue)
    {
        auto currValue = GetValuePtr<T>(aInstance);
        return type->IsEqual(currValue, &aValue);
    }

    template<typename T>
    void SetValue(void* aInstance, const T aValue) const
    {
        auto prevValue = GetValuePtr<T>(aInstance);
        type->Assign(prevValue, &aValue);
    }

    template<typename T>
    T GetValue(void* aInstance) const
    {
        return *GetValuePtr<T>(aInstance);
    }

private:
    template<typename T>
    T* GetValuePtr(void* aInstance) const
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
RED4EXT_ASSERT_SIZE(CProperty::Flags, 0x8);
RED4EXT_ASSERT_SIZE(CProperty, 0x30);
RED4EXT_ASSERT_OFFSET(CProperty, type, 0x0);
RED4EXT_ASSERT_OFFSET(CProperty, name, 0x8);
RED4EXT_ASSERT_OFFSET(CProperty, parent, 0x18);
RED4EXT_ASSERT_OFFSET(CProperty, valueOffset, 0x20);
RED4EXT_ASSERT_OFFSET(CProperty, flags, 0x28);
} // namespace RED4ext
