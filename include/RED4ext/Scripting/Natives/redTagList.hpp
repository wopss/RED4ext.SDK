#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
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
    [[nodiscard]] bool HasTag(CName aTag) const;
    [[nodiscard]] bool HasTags(const DynArray<CName>& aTags) const;
    [[nodiscard]] bool HasTags(const TagList& aTags) const;

    void AddTag(CName aTag);
    void AddTags(const DynArray<CName>& aTags);
    void AddTags(const TagList& aTags);
    void RemoveTag(CName aTag);
    void RemoveTags(const DynArray<CName>& aTags);
    void RemoveTags(const TagList& aTags);
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
