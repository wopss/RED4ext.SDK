#pragma once

#include <cstdint>
#include <mutex>
#include <sstream>

#include <Windows.h>

namespace RED4ext
{
class RelocBase
{
public:
    inline static uintptr_t GetImageBase()
    {
        static const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
        return base;
    }
};

/**
 * @brief Represent a native function, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class RelocFunc : private RelocBase
{
public:
    RelocFunc(uintptr_t aOffset)
        : m_address(reinterpret_cast<T>(aOffset + GetImageBase()))
    {
    }

    inline operator T() const
    {
        return m_address;
    }

private:
    T m_address;
};

/**
 * @brief Represent a native pointer, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class RelocPtr : private RelocBase
{
public:
    RelocPtr(uintptr_t aOffset)
        : m_address(reinterpret_cast<T*>(aOffset + GetImageBase()))
    {
    }

    inline operator T() const
    {
        return *m_address;
    }

    inline T* GetAddr() const
    {
        return m_address;
    }

private:
    T* m_address;
};

/**
 * @brief Represent a native virtual table, use this to relocate its address at runtime.
 * @tparam T The type.
 */
class RelocVtbl : private RelocBase
{
public:
    RelocVtbl(uintptr_t aOffset)
        : m_address(reinterpret_cast<uintptr_t*>(aOffset + GetImageBase()))
    {
    }

    inline operator uintptr_t*() const
    {
        return m_address;
    }

private:
    uintptr_t* m_address;
};

class UniversalRelocBase
{
public:
    uintptr_t Resolve(uint64_t aHash)
    {
        using functionType = uintptr_t (*)(uint64_t);
        static functionType resolveFunc = nullptr;

        static std::once_flag flag;
        std::call_once(flag,
                       []()
                       {
                           constexpr auto dllName = "RED4ext.dll";
                           constexpr auto functionName = "RED4ext_ResolveAddress";

                           auto handle = LoadLibraryA(dllName);
                           if (!handle)
                           {
                               std::stringstream stream;
                               stream << "Failed to get '" << dllName
                                      << "' handle.\nProcess will now close.\n\nLast error: " << GetLastError();

                               MessageBoxA(nullptr, stream.str().c_str(), "RED4ext.SDK", MB_ICONERROR | MB_OK);
                               TerminateProcess(GetCurrentProcess(), 1);
                           }

                           resolveFunc =
                               reinterpret_cast<uintptr_t (*)(uint64_t)>(GetProcAddress(handle, functionName));
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
};

/**
 * @brief Represent a native function, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class UniversalRelocFunc : private UniversalRelocBase
{
public:
    UniversalRelocFunc(uint64_t aHash)
        : m_address(reinterpret_cast<T>(Resolve(aHash)))
    {
    }

    inline operator T() const
    {
        return m_address;
    }

private:
    T m_address;
};

/**
 * @brief Represent a native pointer, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class UniversalRelocPtr : private UniversalRelocBase
{
public:
    UniversalRelocPtr(uint64_t aHash)
        : m_address(reinterpret_cast<T*>(Resolve(aHash)))
    {
    }

    inline operator T() const
    {
        return *m_address;
    }

    inline T* GetAddr() const
    {
        return m_address;
    }

private:
    T* m_address;
};

/**
 * @brief Represent a native virtual table, use this to relocate its address at runtime.
 * @tparam T The type.
 */
class UniversalRelocVtbl : private UniversalRelocBase
{
public:
    UniversalRelocVtbl(uint64_t aHash)
        : m_address(reinterpret_cast<uintptr_t*>(Resolve(aHash)))
    {
    }

    inline operator uintptr_t*() const
    {
        return m_address;
    }

private:
    uintptr_t* m_address;
};

} // namespace RED4ext
