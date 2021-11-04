#pragma once

#include <Windows.h>
#include <cstdint>

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

template<typename T>
class [[deprecated("Use 'RelocFunc' instead.")]] REDfunc : public RelocFunc<T>
{
    using RelocFunc<T>::RelocFunc;
};

template<typename T>
class [[deprecated("Use 'RelocPtr' instead.")]] REDptr : public RelocPtr<T>
{
    using RelocPtr<T>::RelocPtr;
};
} // namespace RED4ext
