#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace red
{
struct TagList
{
    static constexpr const char* NAME = "redTagList";
    static constexpr const char* ALIAS = NAME;

    operator bool() const noexcept;

    [[nodiscard]] bool IsEmpty() const;
    [[nodiscard]] bool Contains(CName aTag) const;
    [[nodiscard]] bool Contains(const DynArray<CName>& aTags) const;
    [[nodiscard]] bool Contains(const TagList& aTags) const;

    void Add(CName aTag);
    void Add(const DynArray<CName>& aTags);
    void Add(const TagList& aTags);
    void Remove(CName aTag);
    void Remove(const DynArray<CName>& aTags);
    void Remove(const TagList& aTags);
    void Clear();

    DynArray<CName> tags; // 00
};
RED4EXT_ASSERT_SIZE(TagList, 0x10);
} // namespace red
using TagList = red::TagList;
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/redTagList-inl.hpp>
#endif
