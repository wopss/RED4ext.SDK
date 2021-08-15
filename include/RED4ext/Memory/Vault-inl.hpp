#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Memory/Vault.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::Memory::Vault* RED4ext::Memory::Vault::Get()
{
    REDfunc<Vault* (*)()> func(Addresses::Memory_Vault_Get);
    return func();
}
