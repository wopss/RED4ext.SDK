#pragma once

#include <type_traits>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Callback.hpp>
#include <RED4ext/Common.hpp>
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

    ResourceToken() = delete;
    ResourceToken(const ResourceToken&) = delete;
    ResourceToken(ResourceToken&&) = delete;

    ~ResourceToken()
    {
        using Destruct_t = void (*)(ResourceToken*);
        RelocFunc<Destruct_t> func(Addresses::ResourceToken_dtor);

        func(this);
    }

    /**
     * @brief Register callback for the resource load event.
     *
     * @param aCallback The callback.
     */
    void OnLoaded(LoadedCallback aCallback)
    {
        using OnLoaded_t = JobHandle* (*)(ResourceToken*, JobHandle*, LoadedCallback*);
        RED4ext::RelocFunc<OnLoaded_t> func(Addresses::ResourceToken_OnLoaded);

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
        RelocFunc<Fetch_t> func(Addresses::ResourceToken_Fetch);

        return func(this);
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    [[nodiscard]] Handle<T>& Get() const noexcept
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

    [[nodiscard]] inline operator T*() const noexcept
    {
        return resource.GetPtr();
    }

    struct Unk38
    {
        using AllocatorType = Memory::EngineAllocator;
        uint8_t unk0[0x78];
    };
    RED4EXT_ASSERT_SIZE(Unk38, 0x78);

    WeakPtr<ResourceToken<T>> self;                    // 00
    DynArray<SharedPtr<ResourceToken<>>> dependencies; // 10
    SharedMutex lock;                                  // 20
    Handle<T> resource;                                // 28
    SharedPtr<Unk38> unk38;                            // 38
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

struct ResourceLoader
{
    static ResourceLoader* Get();

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> LoadAsync(ResourcePath aPath)
    {
        using LoadAsync_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>*, ResourcePath);
        RelocFunc<LoadAsync_t> func(Addresses::ResourceLoader_LoadAsync);

        SharedPtr<ResourceToken<T>> token;
        func(this, &token, aPath);

        return token;
    }

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> FindToken(ResourcePath aPath)
    {
        using FindToken_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>*, ResourcePath);
        RelocFunc<FindToken_t> func(Addresses::ResourceLoader_FindToken);

        SharedPtr<ResourceToken<T>> token;
        func(this, &token, aPath);

        return token;
    }

    HashMap<ResourcePath, WeakPtr<ResourceToken<>>> tokens; // 00
    DynArray<SharedPtr<ResourceToken<>>> failed;            // 30
    SharedMutex tokenLock;                                  // 40
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
