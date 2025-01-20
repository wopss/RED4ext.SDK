#pragma once

#include <concepts>
#include <type_traits>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

namespace Detail
{
template<typename T>
struct AddressResolverOverride : std::false_type
{
    inline static uintptr_t Resolve(T aHash)
    {
        return 0;
    }
};

template<typename T>
struct AllocatorHook : std::false_type
{
};

template<typename T>
struct ConstructorHook : std::false_type
{
};

template<typename T>
struct AfterConstructedHook : std::false_type
{
};

template<typename T>
struct BeforeDestructedHook : std::false_type
{
};

template<typename T>
concept HasAllocatorHook = AllocatorHook<T>::value;

// clang-format off
template<typename T>
concept HasStaticAllocator = requires(T*)
{
    { T::AllocatorType::Get() } -> std::convertible_to<Memory::IAllocator*>;
};
// clang-format on

template<typename T>
concept HasStaticAllocatorOrHook = HasStaticAllocator<T> || HasAllocatorHook<T>;

// clang-format off
template<typename T>
concept HasDynamicAllocator = requires(T* t)
{
    { t->GetAllocator() } -> std::convertible_to<Memory::IAllocator*>;
};
// clang-format on

template<typename T>
concept HasAnyAllocator = HasDynamicAllocator<T> || HasStaticAllocator<T>;

template<typename T>
concept HasAnyAllocatorOrHook = HasAnyAllocator<T> || HasAllocatorHook<T>;

template<typename T>
struct StaticAllocatorTypeResolver : std::false_type
{
};

template<typename T>
requires HasStaticAllocator<T>
struct StaticAllocatorTypeResolver<T> : std::true_type
{
    using type = typename T::AllocatorType;
};

template<typename T>
using ResolveAllocatorType = typename StaticAllocatorTypeResolver<T>::type;

template<typename T>
concept IsSafeDestructible =
    std::is_destructible_v<T> && (!std::is_polymorphic_v<T> || std::has_virtual_destructor_v<T>);

template<typename T>
concept IsAllocator = std::is_base_of_v<Memory::IAllocator, T>;
} // namespace Detail
} // namespace RED4ext
