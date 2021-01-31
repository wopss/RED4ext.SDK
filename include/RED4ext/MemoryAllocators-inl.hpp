#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/MemoryAllocators.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::RTTIAllocator* RED4ext::RTTIAllocator::Get()
{
    using func_t = RTTIAllocator* (*)();
    static REDfunc<func_t> func(Addresses::Allocators_RTTI_Get);
    return func();
}

RED4EXT_INLINE RED4ext::RTTIFunctionAllocator* RED4ext::RTTIFunctionAllocator::Get()
{
    using func_t = RTTIFunctionAllocator* (*)();
    static REDfunc<func_t> func(Addresses::Allocators_RTTIFunction_Get);
    return func();
}
