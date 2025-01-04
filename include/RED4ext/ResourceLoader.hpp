#pragma once

#include <type_traits>

#include <RED4ext/Callback.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/JobQueue.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
template<typename T = CResource>
struct ResourceToken
{
    using AllocatorType = Memory::EngineAllocator;
    using LoadedCallback = FlexCallback<void (*)(RED4ext::Handle<T>&)>;

    ResourceToken() = default;
    ResourceToken(const ResourceToken&) = delete;
    ResourceToken(ResourceToken&&) = delete;

    ~ResourceToken()
    {
        if (!IsFinished())
        {
            using CancelUnk38_t = void (*)(void*);
            static UniversalRelocFunc<CancelUnk38_t> CancelUnk38(Detail::AddressHashes::ResourceToken_CancelUnk38);
            CancelUnk38(unk38);
        }

        using DestructUnk38_t = void (*)(void**);
        static UniversalRelocFunc<DestructUnk38_t> DestructUnk38(Detail::AddressHashes::ResourceToken_DestructUnk38);
        DestructUnk38(&unk38);
    }

    /**
     * @brief Register callback for the resource load event.
     *
     * @param aCallback The callback.
     */
    void OnLoaded(LoadedCallback&& aCallback)
    {
        using OnLoaded_t = JobHandle* (*)(ResourceToken*, JobHandle*, LoadedCallback*);
        static UniversalRelocFunc<OnLoaded_t> func(Detail::AddressHashes::ResourceToken_OnLoaded);

        JobHandle handle{};
        func(this, &handle, &aCallback);
    }

    /**
     * @brief Load if it's not already loaded and get the resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Fetch()
    {
        using Fetch_t = Handle<T>& (*)(ResourceToken*);
        static UniversalRelocFunc<Fetch_t> func(Detail::AddressHashes::ResourceToken_Fetch);

        return func(this);
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    [[nodiscard]] Handle<T>& Get() noexcept
    {
        return resource;
    }

    [[nodiscard]] inline bool IsFinished() const noexcept
    {
        return IsLoaded() || IsFailed();
    }

    [[nodiscard]] inline bool IsLoaded() const noexcept
    {
        return finished && !error;
    }

    [[nodiscard]] inline bool IsFailed() const noexcept
    {
        return error;
    }

    [[nodiscard]] inline operator T*() noexcept
    {
        return resource.GetPtr();
    }

    WeakPtr<ResourceToken<T>> self;                    // 00
    DynArray<SharedPtr<ResourceToken<>>> dependencies; // 10
    SharedSpinLock lock;                               // 20
    Handle<T> resource;                                // 28
    void* unk38;                                       // 38 - SharedPtr<Unk38>.instance
    void* unk40;                                       // 40 - SharedPtr<Unk38>.refCount
    ResourcePath path;                                 // 48
    JobHandle job;                                     // 50
    volatile int32_t finished;                         // 58
    uint8_t error;                                     // 5C
    uint8_t unk5D;                                     // 5D
    uint8_t unk5E;                                     // 5E
    uint8_t unk5F;                                     // 5F
};
RED4EXT_ASSERT_SIZE(ResourceToken<>, 0x60);
RED4EXT_ASSERT_OFFSET(ResourceToken<>, resource, 0x28);
RED4EXT_ASSERT_OFFSET(ResourceToken<>, unk38, 0x38);
RED4EXT_ASSERT_OFFSET(ResourceToken<>, finished, 0x58);
RED4EXT_ASSERT_OFFSET(ResourceToken<>, error, 0x5C);

struct ResourceRequest
{
    ResourceRequest(ResourcePath aPath = {});

    ResourcePath path;             // 00
    uint64_t unk08;                // 08
    bool unk10;                    // 10
    bool disablePreInitialization; // 11
    bool disableImports;           // 12
    bool disablePostLoad;          // 13
    bool unk14;                    // 14
    bool unk15;                    // 15
    bool unk16;                    // 16
    int32_t archiveHandle;         // 18
    int32_t unk1C;                 // 1C
    uint64_t unk20;                // 20
};
RED4EXT_ASSERT_SIZE(ResourceRequest, 0x28);
RED4EXT_ASSERT_OFFSET(ResourceRequest, path, 0x0);
RED4EXT_ASSERT_OFFSET(ResourceRequest, disablePreInitialization, 0x11);
RED4EXT_ASSERT_OFFSET(ResourceRequest, disablePostLoad, 0x13);
RED4EXT_ASSERT_OFFSET(ResourceRequest, archiveHandle, 0x18);

struct ResourceLoader
{
    static ResourceLoader* Get();

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> LoadAsync(ResourcePath aPath)
    {
        using LoadAsync_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>&, ResourcePath);
        static UniversalRelocFunc<LoadAsync_t> func(Detail::AddressHashes::ResourceLoader_IssueLoadingRequestByPath);

        SharedPtr<ResourceToken<T>> token;
        func(this, token, aPath);

        return token;
    }

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> LoadAsync(const ResourceRequest& aRequest)
    {
        using LoadAsync_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>&, const ResourceRequest&);
        static UniversalRelocFunc<LoadAsync_t> func(Detail::AddressHashes::ResourceLoader_IssueLoadingRequest);

        SharedPtr<ResourceToken<T>> token;
        func(this, token, aRequest);

        return token;
    }

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> FindToken(ResourcePath aPath)
    {
        using FindToken_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>*, ResourcePath);
        static UniversalRelocFunc<FindToken_t> func(Detail::AddressHashes::ResourceLoader_FindTokenFast);

        std::shared_lock<SharedSpinLock> _(tokenLock);

        SharedPtr<ResourceToken<T>> token;
        func(this, &token, aPath);

        return token;
    }

    HashMap<ResourcePath, WeakPtr<ResourceToken<>>> tokens; // 00
    DynArray<SharedPtr<ResourceToken<>>> failed;            // 30
    SharedSpinLock tokenLock;                               // 40
    uintptr_t unk48;                                        // 48
    uintptr_t unk50;                                        // 50
    uintptr_t unk58;                                        // 58
    uint8_t unk60;                                          // 60
    DynArray<void*> unk68;                                  // 68
    uint8_t unk70;                                          // 70
};
RED4EXT_ASSERT_SIZE(ResourceLoader, 0x80);
RED4EXT_ASSERT_OFFSET(ResourceLoader, tokens, 0x00);
RED4EXT_ASSERT_OFFSET(ResourceLoader, failed, 0x30);
RED4EXT_ASSERT_OFFSET(ResourceLoader, tokenLock, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ResourceLoader-inl.hpp>
#endif
