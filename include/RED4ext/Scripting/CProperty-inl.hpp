#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/CProperty.hpp>
#endif

#include <RED4ext/CNamePool.hpp>

RED4EXT_INLINE RED4ext::CProperty::CProperty(IRTTIType* aType, const char* aName, CClass* aParent,
                                             uint32_t aValueOffset, const char* aGroup, Flags aFlags)
    : type(aType)
    , parent(aParent)
    , valueOffset(aValueOffset)
    , flags(aFlags)
{
    // There is another argument passed to CProperty ctor, I did not see it assigned in the class' ctor and it was
    // just a pointer to null, maybe it is used in debug mode?

    constexpr char memberPrefix[] = "m_";
    constexpr size_t length = sizeof(memberPrefix) - 1;

    if (strncmp(aName, memberPrefix, length) == 0)
    {
        aName += length;
    }

    name = CNamePool::Add(aName);
    group = CNamePool::Add(aGroup);
}

RED4EXT_INLINE RED4ext::CProperty* RED4ext::CProperty::Create(IRTTIType* aType, const char* aName, CClass* aParent,
                                                              uint32_t aValueOffset, const char* aGroup, Flags aFlags)
{
    // Property are allocated using "PoolRTTIProperty", but DynArray is using "PoolRTTI".
    auto allocator = RTTIAllocator::Get();
    auto prop = allocator->Alloc<CProperty>();
    if (!prop)
    {
        return nullptr;
    }

    return new (prop) CProperty(aType, aName, aParent, aValueOffset, aGroup, aFlags);
}
