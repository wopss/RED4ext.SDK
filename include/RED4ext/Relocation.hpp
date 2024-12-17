#pragma once

#include <cstdint>
#include <filesystem>
#include <string_view>

#include <Windows.h>

#include <RED4ext/Api/Sdk.hpp>

namespace RED4ext
{
class RelocBase
{
public:
    static uintptr_t GetImageBase();
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
    static uintptr_t Resolve(uint32_t aHash);

private:
    using QueryFunc_t = void (*)(PluginInfo*);
    using ResolveFunc_t = std::uintptr_t (*)(std::uint32_t);

    static HMODULE GetRED4extModule();

    static ResolveFunc_t InitializeAddressResolverFunction();
    static ResolveFunc_t GetAddressResolverFunction();

    static HMODULE GetCurrentModuleHandle();
    static std::filesystem::path GetCurrentModulePath();

    static QueryFunc_t GetCurrentPluginQueryFunction();
    static bool QueryCurrentPlugin(PluginInfo& aPluginInfo);

    static void ShowErrorAndTerminateProcess(std::wstring_view aMsg, std::uint32_t aLastError,
                                             bool aQueryPluginInfo = true);
};

/**
 * @brief Represent a native function, use this to relocate its address at runtime.
 * @tparam T The type.
 */
template<typename T>
class UniversalRelocFunc : private UniversalRelocBase
{
public:
    UniversalRelocFunc(uint32_t aHash)
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
    UniversalRelocPtr(uint32_t aHash)
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
    UniversalRelocVtbl(uint32_t aHash)
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

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Relocation-inl.hpp>
#endif
