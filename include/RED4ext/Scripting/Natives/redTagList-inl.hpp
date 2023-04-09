#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/redTagList.hpp>
#endif

RED4EXT_INLINE RED4ext::red::TagList::operator bool() const noexcept
{
    return !IsEmpty();
}

RED4EXT_INLINE bool RED4ext::red::TagList::IsEmpty() const
{
    return !tags.size;
}

RED4EXT_INLINE bool RED4ext::red::TagList::HasTag(CName aTag) const
{
    return tags.Contains(aTag);
}

RED4EXT_INLINE bool RED4ext::red::TagList::HasTags(const DynArray<CName>& aTags) const
{
    for (auto tag : aTags)
    {
        if (!HasTag(tag))
        {
            return false;
        }
    }

    return true;
}

RED4EXT_INLINE bool RED4ext::red::TagList::HasTags(const TagList& aTags) const
{
    return HasTags(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::AddTag(CName aTag)
{
    if (!tags.Contains(aTag))
    {
        tags.EmplaceBack(aTag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::AddTags(const DynArray<CName>& aTags)
{
    for (auto tag : aTags)
    {
        AddTag(tag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::AddTags(const TagList& aTags)
{
    AddTags(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::RemoveTag(CName aTag)
{
    tags.Remove(aTag);
}

RED4EXT_INLINE void RED4ext::red::TagList::RemoveTags(const DynArray<CName>& aTags)
{
    for (auto tag : aTags)
    {
        RemoveTag(tag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::RemoveTags(const TagList& aTags)
{
    RemoveTags(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::Clear()
{
    tags.Clear();
}
