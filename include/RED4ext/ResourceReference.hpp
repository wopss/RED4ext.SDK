#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>
#include <RED4ext/ResourceLoader.hpp>
#include <RED4ext/ResourcePath.hpp>
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
        , token(aOther.token)
    {
    }

    ResourceReference(ResourceReference&& aOther) noexcept
        : path(aOther.path)
        , token(std::move(aOther.token))
    {
        aOther.path = "";
    }

    ~ResourceReference() noexcept = default;

    ResourceReference& operator=(const ResourceReference& aRhs) noexcept
    {
        path = aRhs.path;
        token = aRhs.token;
        return *this;
    }

    ResourceReference& operator=(ResourceReference&& aRhs) noexcept
    {
        path = aRhs.path;
        token = std::move(aRhs.token);
        aRhs.path = "";
        return *this;
    }

    /**
     * @brief Load the resource synchronously and fill the token.
     */
    void Load()
    {
        using Load_t = void (*)(ResourceReference*);
        RelocFunc<Load_t> func(Addresses::ResourceReference_Load);

        func(this);
    }

    /**
     * @brief Load if it's not already loaded and get the resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Fetch()
    {
        using Fetch_t = Handle<T>& (*)(ResourceReference*);
        RelocFunc<Fetch_t> func(Addresses::ResourceReference_Fetch);

        return func(this);
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Get() const noexcept
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
        RelocFunc<Reset_t> func(Addresses::ResourceReference_Reset);

        func(this);
    }

    inline bool IsLoaded() const noexcept
    {
        return token && token->IsLoaded();
    }

    inline bool IsFailed() const noexcept
    {
        return token && token->IsFailed();
    }

    ResourcePath path;                 // 00
    SharedPtr<ResourceToken<T>> token; // 08
};
RED4EXT_ASSERT_SIZE(ResourceReference<>, 0x18);
RED4EXT_ASSERT_OFFSET(ResourceReference<>, path, 0x0);
RED4EXT_ASSERT_OFFSET(ResourceReference<>, token, 0x8);

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
RED4EXT_ASSERT_OFFSET(ResourceAsyncReference<>, path, 0x0);

template<typename T>
using Ref = ResourceReference<T>;

template<typename T>
using RaRef = ResourceAsyncReference<T>;
} // namespace RED4ext
