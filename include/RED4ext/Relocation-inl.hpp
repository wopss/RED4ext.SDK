#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Relocation.hpp>
#endif

#include <mutex>
#include <sstream>

#include <Windows.h>

#include <RED4ext/Common.hpp>

RED4EXT_INLINE uintptr_t RED4ext::RelocBase::GetImageBase()
{
    static const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
    return base;
}

RED4EXT_INLINE
uintptr_t RED4ext::UniversalRelocBase::Resolve(uint32_t aHash)
{
    using functionType = uintptr_t (*)(uint32_t);
    static functionType resolveFunc = nullptr;

    static std::once_flag flag;
    std::call_once(flag,
       []()
       {
           constexpr auto dllName = "RED4ext.dll";
           constexpr auto functionName = "RED4ext_ResolveAddress";

           auto handle = GetModuleHandleA(dllName);
           if (!handle)
           {
               std::stringstream stream;
               stream << "Failed to get '" << dllName
                      << "' handle.\nProcess will now close.\n\nLast error: " << GetLastError();

               MessageBoxA(nullptr, stream.str().c_str(), "RED4ext.SDK", MB_ICONERROR | MB_OK);
               TerminateProcess(GetCurrentProcess(), 1);
           }

           resolveFunc = reinterpret_cast<functionType>(GetProcAddress(handle, functionName));
           if (resolveFunc == nullptr)
           {
               std::stringstream stream;
               stream << "Failed to get '" << functionName
                      << "' address.\nProcess will now close.\n\nLast error: " << GetLastError();

               MessageBoxA(nullptr, stream.str().c_str(), "RED4ext.SDK", MB_ICONERROR | MB_OK);
               TerminateProcess(GetCurrentProcess(), 1);
           }
       });

    auto address = resolveFunc(aHash);
    if (address == 0)
    {
        std::stringstream stream;
        stream << "Failed to resolve address for hash " << std::hex << aHash << ".\nProcess will now close.";

        MessageBoxA(nullptr, stream.str().c_str(), "RED4ext.SDK", MB_ICONERROR | MB_OK);
        TerminateProcess(GetCurrentProcess(), 1);
    }

    return address;
}
