#pragma once

#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/SharedPtr.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
template<typename T = CResource>
struct ResourceToken
{
    using AllocatorType = Memory::EngineAllocator;

    ResourceToken() = delete;
    ResourceToken(const ResourceToken&) = delete;

    ~ResourceToken()
    {
        using Destruct_t = void (*)(ResourceToken*);
        RelocFunc<Destruct_t> Destruct_(Addresses::ResourceToken_dtor);

        Destruct_(this);
    }

    /**
     * @brief Load if it's not already loaded and get the resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Fetch()
    {
        using Fetch_t = Handle<T>& (*)(ResourceToken*);
        RelocFunc<Fetch_t> Fetch_(Addresses::ResourceToken_Fetch);

        return Fetch_(this);
    }

    /**
     * @brief Get the loaded resource.
     *
     * @return The loaded resource.
     */
    Handle<T>& Get() const
    {
        return resource;
    }

    inline bool IsFinished() const
    {
        return IsLoaded() || IsFailed();
    }

    inline bool IsLoaded() const
    {
        return finished && !error;
    }

    inline bool IsFailed() const
    {
        return error;
    }

    [[nodiscard]] inline operator T*() const
    {
        return resource.GetPtr();
    }

    struct Unk38
    {
        using AllocatorType = Memory::EngineAllocator;
        uint8_t unk0[0x78];
    };

    WeakPtr<ResourceToken<T>> self;                    // 00
    DynArray<SharedPtr<ResourceToken<>>> dependencies; // 10
    uint8_t unk20;                                     // 20
    Handle<T> resource;                                // 28
    SharedPtr<Unk38> unk38;                            // 38
    ResourcePath path;                                 // 48
    uintptr_t unk50;                                   // 50
    volatile int32_t finished;                         // 58
    uint8_t error;                                     // 5C
    uint8_t unk5D;                                     // 5D
    uint8_t unk5E;                                     // 5E
    uint8_t unk5F;                                     // 5F
};
RED4EXT_ASSERT_SIZE(ResourceToken<>, 0x60);
RED4EXT_ASSERT_SIZE(ResourceToken<>::Unk38, 0x78);

struct ResourceLoader
{
    static ResourceLoader* Get();

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> LoadAsync(ResourcePath aPath)
    {
        using LoadAsync_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>*, ResourcePath);
        RelocFunc<LoadAsync_t> LoadAsync_(Addresses::ResourceLoader_LoadAsync);

        SharedPtr<ResourceToken<T>> token;
        LoadAsync_(this, &token, aPath);

        return token;
    }

    template<typename T = CResource>
    SharedPtr<ResourceToken<T>> FindToken(ResourcePath aPath)
    {
        using FindToken_t = uintptr_t (*)(ResourceLoader*, SharedPtr<ResourceToken<T>>*, ResourcePath);
        RelocFunc<FindToken_t> FindToken_(Addresses::ResourceLoader_FindToken);

        SharedPtr<ResourceToken<T>> token;
        FindToken_(this, &token, aPath);

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
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ResourceLoader-inl.hpp>
#endif
