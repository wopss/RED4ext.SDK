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
    ResourceReference() = default;

    ResourceReference(ResourcePath aPath) noexcept
        : path(aPath)
    {
        LoadAsync();
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
        path = std::move(aRhs.path);
        token = std::move(aRhs.token);
        return *this;
    }

    /**
     * @brief Load the resource synchronously.
     *
     * @return Returns true if the resource is loaded successfully, false otherwise.
     */
    bool Load()
    {
        if (!token)
        {
            token = ResourceLoader::Get()->LoadAsync<T>(path);
        }

        token->Fetch();
        return token->IsLoaded();
    }

    /**
     * @brief Start loading the resource asynchronously.
     *
     * @return Returns true if the load started successfully, false otherwise.
     */
    bool LoadAsync()
    {
        if (!token)
        {
            token = ResourceLoader::Get()->LoadAsync<T>(path);
        }

        return !token->IsFailed();
    }

    /**
     * @brief Load if it's not already loaded and get the resource.
     *
     * @return The loaded resource.
     */
    [[nodiscard]] Handle<T>& Fetch()
    {
        if (!token)
        {
            token = ResourceLoader::Get()->LoadAsync<T>(path);
        }

        return token->Fetch();
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    [[nodiscard]] Handle<T>& Get() const noexcept
    {
        return token->Get();
    }

    /**
     * @brief Reset the path and associated token.
     */
    void Reset()
    {
        path = "";
        token.Reset();
    }

    [[nodiscard]] inline bool IsLoaded() const noexcept
    {
        return token && token->IsLoaded();
    }

    [[nodiscard]] inline bool IsFailed() const noexcept
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
    ResourceAsyncReference() = default;

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

    ResourceAsyncReference& operator=(const ResourceAsyncReference& aRhs) noexcept
    {
        path = aRhs.path;
        return *this;
    }

    ResourceAsyncReference& operator=(ResourceAsyncReference&& aRhs) noexcept
    {
        path = std::move(aRhs.path);
        return *this;
    }

    bool operator==(const ResourceAsyncReference& aRhs) const noexcept
    {
        return path == aRhs.path;
    }

    bool operator!=(const ResourceAsyncReference& aRhs) const noexcept
    {
        return !(*this == aRhs);
    }

    [[nodiscard]] ResourceReference<T> Resolve() const noexcept
    {
        return {path};
    }

    ResourcePath path; // 00
};
RED4EXT_ASSERT_SIZE(ResourceAsyncReference<>, 0x8);
RED4EXT_ASSERT_OFFSET(ResourceAsyncReference<>, path, 0x0);

template<typename T = CResource>
using Ref = ResourceReference<T>;

template<typename T = CResource>
using RaRef = ResourceAsyncReference<T>;
} // namespace RED4ext
