#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GameEngine.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CGameEngine* RED4ext::CGameEngine::Get()
{
    static UniversalRelocPtr<CGameEngine*> ptr(Detail::AddressHashes::CGameEngine);
    return ptr;
}

RED4EXT_INLINE void RED4ext::CGameEngine::TakeScreenshot(const rend::SingleScreenShotData& acData, bool a2)
{
    static UniversalRelocFunc<void (*)(CGameEngine*, const rend::SingleScreenShotData*, bool)> func(3668449892);

    func(this, &acData, a2);
}
