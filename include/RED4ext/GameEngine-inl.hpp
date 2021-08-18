#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GameEngine.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CGameEngine* RED4ext::CGameEngine::Get()
{
    RelocPtr<CGameEngine*> ptr(Addresses::CGameEngine);
    return ptr;
}
