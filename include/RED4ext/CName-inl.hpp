#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CName.hpp>
#endif

#include <RED4ext/CNamePool.hpp>

RED4EXT_INLINE RED4ext::CName::operator uint64_t() const noexcept
{
    return hash;
}

RED4EXT_INLINE size_t RED4ext::CName::operator()(const CName& aName) const
{
    return aName.hash;
}

RED4EXT_INLINE RED4ext::CName& RED4ext::CName::operator=(const uint64_t aRhs) noexcept
{
    hash = aRhs;
    return *this;
}

RED4EXT_INLINE RED4ext::CName& RED4ext::CName::operator=(const char* aRhs) noexcept
{
    hash = FNV1a(aRhs);
    return *this;
}

RED4EXT_INLINE RED4ext::CName& RED4ext::CName::operator=(const CName& aRhs) noexcept
{
    hash = aRhs.hash;
    return *this;
}

RED4EXT_INLINE bool RED4ext::CName::operator==(const CName& aRhs) const noexcept
{
    return hash == aRhs.hash;
}

RED4EXT_INLINE bool RED4ext::CName::operator!=(const CName& aRhs) const noexcept
{
    return !(*this == aRhs);
}

RED4EXT_INLINE bool RED4ext::CName::operator==(const uint64_t aRhs) const noexcept
{
    return hash == aRhs;
}

RED4EXT_INLINE bool RED4ext::CName::operator!=(const uint64_t aRhs) const noexcept
{
    return hash != aRhs;
}

RED4EXT_INLINE const char* RED4ext::CName::ToString() const
{
    return CNamePool::Get(*this);
}

RED4EXT_INLINE bool RED4ext::CName::IsEmpty() const noexcept
{
    return hash == 0;
}
