#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct ResourceReference
{
    ResourceReference() noexcept = default;
    ResourceReference(ResourcePath aPath) noexcept;
    ResourceReference(ResourcePath aPath, bool aLoad) noexcept;
    ResourceReference(const ResourceReference& aOther) noexcept;
    ResourceReference(ResourceReference&& aOther) noexcept;
    ~ResourceReference();

    /**
     * @brief Load the resource synchronously and fill the token.
     */
    void Load();

    /**
     * @brief Load if it's not already loaded and get the resource.
     * @return The loaded resource.
     */
    Handle<CResource>& Fetch();

    /**
     * @brief Reset the path and associated token.
     */
    void Reset();

    struct ResourceTokenPtr
    {
        void* instance{ nullptr };
        RED4ext::RefCnt* refCount{ nullptr };
    };

    ResourcePath path;      // 00
    ResourceTokenPtr token; // 08
};
RED4EXT_ASSERT_SIZE(ResourceReference, 0x18);

struct ResourceAsyncReference
{
    ResourceAsyncReference() noexcept = default;
    ResourceAsyncReference(ResourcePath aPath) noexcept;
    ResourceAsyncReference(const ResourceAsyncReference& aOther) noexcept;
    ResourceAsyncReference(ResourceAsyncReference&& aOther) noexcept;

    [[nodiscard]] ResourceReference Resolve() const noexcept;

    ResourcePath path; // 00
};
RED4EXT_ASSERT_SIZE(ResourceAsyncReference, 0x8);

template<typename T = CResource>
struct TResourceReference : ResourceReference
{
    // static_assert(std::is_base_of_v<CResource, T> or std::is_same_v<CResource, T>,
    //     "Resource reference inner type must inherit from 'CResource'.");

    TResourceReference() noexcept
        : ResourceReference()
    {}

    TResourceReference(ResourcePath aPath) noexcept
        : ResourceReference(aPath)
    {}

    TResourceReference(ResourcePath aPath, bool aLoad) noexcept
        : ResourceReference(aPath, aLoad)
    {}

    TResourceReference(const TResourceReference<T>& aOther) noexcept
        : ResourceReference(aOther)
    {}

    TResourceReference(TResourceReference<T>&& aOther) noexcept
        : ResourceReference(aOther)
    {}

    inline Handle<T>& Fetch()
    {
        return reinterpret_cast<Handle<T>&>(ResourceReference::Fetch());
    }
};
RED4EXT_ASSERT_SIZE(TResourceReference<>, sizeof(ResourceReference));

template<typename T = CResource>
struct TResourceAsyncReference : ResourceAsyncReference
{
    // static_assert(std::is_base_of_v<CResource, T> or std::is_same_v<CResource, T>,
    //     "Resource reference inner type must inherit from 'CResource'.");

    TResourceAsyncReference() noexcept
        : ResourceAsyncReference()
    {}

    TResourceAsyncReference(ResourcePath aPath) noexcept
        : ResourceAsyncReference(aPath)
    {}

    TResourceAsyncReference(const TResourceAsyncReference<T>& aOther) noexcept
        : ResourceAsyncReference(aOther)
    {}

    TResourceAsyncReference(TResourceAsyncReference<T>&& aOther) noexcept
        : ResourceAsyncReference(aOther)
    {}

    [[nodiscard]] inline TResourceReference<T> Resolve() const noexcept
    {
        return TResourceReference<T>(path);
    }
};
RED4EXT_ASSERT_SIZE(TResourceReference<>, sizeof(ResourceReference));

template<typename T>
using Ref = TResourceReference<T>;

template<typename T>
using RaRef = TResourceAsyncReference<T>;
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ResourceReference-inl.hpp>
#endif
