#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Memory/Vault.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::Memory::Vault* RED4ext::Memory::Vault::Get()
{
    static UniversalRelocPtr<Vault*> ptr(Detail::AddressHashes::Memory_Vault);
    return reinterpret_cast<Vault*>(ptr.GetAddr());
}
