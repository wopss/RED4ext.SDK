#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/LaunchParameters.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE const RED4ext::HashMap<RED4ext::String, RED4ext::DynArray<RED4ext::String>>& RED4ext::
    GetLaunchParameters() noexcept
{
    static const auto& params =
        *UniversalRelocPtr<HashMap<String, DynArray<String>>>(Detail::AddressHashes::LaunchParameters).GetAddr();

    return params;
}
