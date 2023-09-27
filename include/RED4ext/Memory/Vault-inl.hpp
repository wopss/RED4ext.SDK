#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Memory/Vault.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::Memory::Vault* RED4ext::Memory::Vault::Get()
{
    RelocPtr<Vault*> ptr(Addresses::Memory_Vault);
    return reinterpret_cast<Vault*>(ptr.GetAddr());
}
