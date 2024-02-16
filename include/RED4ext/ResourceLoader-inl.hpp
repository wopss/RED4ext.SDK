#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ResourceLoader.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::ResourceLoader* RED4ext::ResourceLoader::Get()
{
    UniversalRelocPtr<ResourceLoader*> ptr(Detail::AddressHashes::ResourceLoader);
    return ptr;
}
