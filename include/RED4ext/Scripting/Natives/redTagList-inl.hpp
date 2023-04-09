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

RED4EXT_INLINE bool RED4ext::red::TagList::Contains(CName aTag) const
{
    return tags.Contains(aTag);
}

RED4EXT_INLINE bool RED4ext::red::TagList::Contains(const DynArray<CName>& aTags) const
{
    for (auto tag : aTags)
    {
        if (!Contains(tag))
        {
            return false;
        }
    }

    return true;
}

RED4EXT_INLINE bool RED4ext::red::TagList::Contains(const TagList& aTags) const
{
    return Contains(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::Add(CName aTag)
{
    if (!tags.Contains(aTag))
    {
        tags.EmplaceBack(aTag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::Add(const DynArray<CName>& aTags)
{
    for (auto tag : aTags)
    {
        Add(tag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::Add(const TagList& aTags)
{
    Add(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::Remove(CName aTag)
{
    tags.Remove(aTag);
}

RED4EXT_INLINE void RED4ext::red::TagList::Remove(const DynArray<CName>& aTags)
{
    for (auto tag : aTags)
    {
        Remove(tag);
    }
}

RED4EXT_INLINE void RED4ext::red::TagList::Remove(const TagList& aTags)
{
    Remove(aTags.tags);
}

RED4EXT_INLINE void RED4ext::red::TagList::Clear()
{
    tags.Clear();
}
