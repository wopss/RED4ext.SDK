#pragma once

#include <cstdint>

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

enum class UniversalRelocSegment : uint32_t
{
    Text = 0,
    Data,
    Rdata
};

class UniversalRelocBase
{
public:
    static uintptr_t Resolve(UniversalRelocSegment aSegment, uint64_t aHash);
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
        : m_address(reinterpret_cast<T>(Resolve(UniversalRelocSegment::Text, aHash)))
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
    UniversalRelocPtr(uint64_t aHash, UniversalRelocSegment aSegment = UniversalRelocSegment::Data)
        : m_address(reinterpret_cast<T*>(Resolve(aSegment, aHash)))
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
        : m_address(reinterpret_cast<uintptr_t*>(Resolve(UniversalRelocSegment::Rdata, aHash)))
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
