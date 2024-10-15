#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CommandLine.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/CString.hpp>

RED4EXT_INLINE const RED4ext::CommandLine* RED4ext::CommandLine::Get() noexcept
{
    // Just copy constructing breaks HashMap::GetAllocator due to const things, just use GetAddr
    static const CommandLine* ptr{
        RED4ext::UniversalRelocPtr<RED4ext::CommandLine>(RED4ext::Detail::AddressHashes::CommandLine).GetAddr()};
    return ptr;
}

RED4EXT_INLINE bool RED4ext::CommandLine::HasLaunchParameter(const RED4ext::CString& aParam) const noexcept
{
    return m_parameterMap.Get(aParam) != nullptr;
}
