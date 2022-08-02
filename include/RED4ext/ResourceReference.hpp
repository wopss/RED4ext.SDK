#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ResourceLoader.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/SharedPtr.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
template<typename T = CResource>
struct ResourceReference
{
    ResourceReference(ResourcePath aPath) noexcept
        : path(aPath)
    {
    }

    ResourceReference(ResourcePath aPath, bool aLoad) noexcept
        : path(aPath)
    {
        if (aLoad)
        {
            Load();
        }
    }

    ResourceReference(const ResourceReference& aOther) noexcept
        : path(aOther.path)
    {
        if (aOther.token.instance)
        {
            Load(); // Initialize the token if other instance is already loaded
        }
    }

    ResourceReference(ResourceReference&& aOther) noexcept
        : path(aOther.path)
        , token(aOther.token)
    {
        aOther.path = ResourcePath();
        aOther.token.instance = nullptr;
        aOther.token.refCount = nullptr;
    }

    ~ResourceReference()
    {
        Reset();
    }

    /**
     * @brief Load the resource synchronously and fill the token.
     */
    void Load()
    {
        using Load_t = void (*)(ResourceReference*);
        RelocFunc<Load_t> Load_(Addresses::ResourceReference_Load);

        Load_(this);
    }

    /**
     * @brief Load if it's not already loaded and get the resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Fetch()
    {
        using Fetch_t = Handle<T>& (*)(ResourceReference*);
        RelocFunc<Fetch_t> Fetch_(Addresses::ResourceReference_Fetch);

        return Fetch_(this);
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Get() const
    {
        if (token)
        {
            return token->resource;
        }

        return {};
    }

    /**
     * @brief Reset the path and associated token.
     */
    void Reset()
    {
        using Reset_t = void (*)(ResourceReference*);
        RelocFunc<Reset_t> Reset_(Addresses::ResourceReference_Reset);

        Reset_(this);
    }

    inline bool IsLoaded() const
    {
        return token && token->IsLoaded();
    }

    inline bool IsFailed() const
    {
        return token && token->IsFailed();
    }

    ResourcePath path;                 // 00
    SharedPtr<ResourceToken<T>> token; // 08
};
RED4EXT_ASSERT_SIZE(ResourceReference<>, 0x18);

template<typename T = CResource>
struct ResourceAsyncReference
{
    ResourceAsyncReference(ResourcePath aPath) noexcept
        : path(aPath)
    {
    }

    ResourceAsyncReference(const ResourceAsyncReference& aOther) noexcept
        : path(aOther.path)
    {
    }

    ResourceAsyncReference(ResourceAsyncReference&& aOther) noexcept
        : path(aOther.path)
    {
        aOther.path = ResourcePath();
    }

    [[nodiscard]] ResourceReference<T> Resolve() const noexcept
    {
        return {path};
    }

    ResourcePath path; // 00
};
RED4EXT_ASSERT_SIZE(ResourceAsyncReference<>, 0x8);

template<typename T>
using Ref = ResourceReference<T>;

template<typename T>
using RaRef = ResourceAsyncReference<T>;
} // namespace RED4ext
