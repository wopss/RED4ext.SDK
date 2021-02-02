#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>

namespace RED4ext
{
struct CNamePool
{
    static CName Add(const char* aText);
    static CName Add(const CString& aText);

    /**
     * @brief Add a hash and text pair.
     * @param aName The hash for \p aText
     * @param aText The text.
     */
    static void Add(const CName& aName, const char* aText);

    /**
     * @brief Add a hash and text pair.
     * @param aName The hash for \p aText
     * @param aText The text.
     */
    static void Add(const CName& aName, const CString& aText);

    static const char* Get(const CName& aName);
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CNamePool-inl.hpp>
#endif
