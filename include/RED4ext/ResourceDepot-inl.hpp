#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ResourceDepot.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::ResourceDepot* RED4ext::ResourceDepot::Get()
{
    RelocPtr<ResourceDepot*> ptr(Addresses::ResourceDepot);
    return ptr;
}
