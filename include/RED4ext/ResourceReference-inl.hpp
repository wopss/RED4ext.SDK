#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ResourceReference.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::ResourceReference::ResourceReference(ResourcePath aPath) noexcept
    : path(aPath)
{
}

RED4EXT_INLINE RED4ext::ResourceReference::ResourceReference(ResourcePath aPath, bool aLoad) noexcept
    : path(aPath)
{
    if (aLoad)
    {
        Load();
    }
}

RED4EXT_INLINE RED4ext::ResourceReference::ResourceReference(const ResourceReference& aOther) noexcept
    : path(aOther.path)
{
    if (aOther.token.instance)
    {
        Load(); // Initialize token if other instance is already loaded
    }
}

RED4EXT_INLINE RED4ext::ResourceReference::ResourceReference(ResourceReference&& aOther) noexcept
    : path(aOther.path)
    , token(aOther.token)
{
    aOther.path = ResourcePath();
    aOther.token.instance = nullptr;
    aOther.token.refCount = nullptr;
}

RED4EXT_INLINE RED4ext::ResourceReference::~ResourceReference()
{
    Reset();
}

RED4EXT_INLINE void RED4ext::ResourceReference::Load()
{
    using Load_t = void (*)(ResourceReference*);
    RelocFunc<Load_t> Load_(Addresses::ResourceReference_Load);

    Load_(this);
}

RED4EXT_INLINE RED4ext::Handle<RED4ext::CResource>& RED4ext::ResourceReference::Fetch()
{
    using Fetch_t = Handle<CResource>& (*)(ResourceReference*);
    RelocFunc<Fetch_t> Fetch_(Addresses::ResourceReference_Fetch);

    return Fetch_(this);
}

RED4EXT_INLINE void RED4ext::ResourceReference::Reset()
{
    using Reset_t = void (*)(ResourceReference*);
    RelocFunc<Reset_t> Reset_(Addresses::ResourceReference_Reset);

    Reset_(this);
}

RED4EXT_INLINE RED4ext::ResourceAsyncReference::ResourceAsyncReference(ResourcePath aPath) noexcept
    : path(aPath)
{
}

RED4EXT_INLINE RED4ext::ResourceAsyncReference::ResourceAsyncReference(const ResourceAsyncReference& aOther) noexcept
    : path(aOther.path)
{
}

RED4EXT_INLINE RED4ext::ResourceAsyncReference::ResourceAsyncReference(ResourceAsyncReference&& aOther) noexcept
    : path(aOther.path)
{
    aOther.path = ResourcePath();
}

RED4EXT_INLINE RED4ext::ResourceReference RED4ext::ResourceAsyncReference::Resolve() const noexcept
{
    return {path};
}
