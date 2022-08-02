#pragma once

#include <type_traits>

#include <RED4ext/Memory/Allocators.hpp>

namespace RED4ext::Memory
{
template<typename T>
struct AllocatorHook : std::false_type {};

template<typename T>
struct ConstructorHook : std::false_type {};

template<typename T>
struct AfterConstructedHook : std::false_type {};

template<typename T>
struct BeforeDestructedHook : std::false_type {};

namespace detail
{
template<typename T>
concept IsAllocator = std::is_base_of_v<IAllocator, T>;

template<typename T>
concept HasAllocatorHook = AllocatorHook<T>::value;

template<typename T>
concept HasStaticAllocator = HasAllocatorHook<T> || requires(T)
{
    { T::AllocatorType::Get() } -> std::convertible_to<IAllocator*>;
};

template<typename T>
concept HasDynamicAllocator = requires(T t)
{
    { t.GetAllocator() } -> std::convertible_to<IAllocator*>;
};

template<typename T>
concept HasAnyAllocator = HasDynamicAllocator<T> || HasStaticAllocator<T>;

template<typename T>
struct AllocatorTypeResolver : std::false_type {};

template<typename T>
requires HasStaticAllocator<T>
struct AllocatorTypeResolver<T> : std::true_type
{
    using type = typename T::AllocatorType;
};

template<typename T>
using ResolveAllocatorType = typename detail::AllocatorTypeResolver<T>::type;

template<typename T>
concept IsDestructible = std::is_destructible_v<T> && (!std::is_polymorphic_v<T> || std::has_virtual_destructor_v<T>);
} // namespace detail

/**
 * @brief Creates a new object using the appropriate allocator.
 * The object type must define a scoped type `AllocatorType`.
 *
 * @tparam T The object type.
 * @tparam Args The type of the constructor arguments.
 * @param aArgs The constructor arguments.
 * @return The object pointer.
 */
template<typename T, typename ...Args>
requires detail::HasStaticAllocator<T>
inline T* New(Args&&... aArgs)
{
    auto allocator = GetAllocator<T>();
    auto instance = allocator->template Alloc<T>();

    if constexpr (ConstructorHook<T>::value)
    {
        ConstructorHook<T>::Apply(instance);
    }
    else
    {
        new (instance) T(std::forward<Args>(aArgs)...);
    }

    if constexpr (AfterConstructedHook<T>::value)
    {
        AfterConstructedHook<T>::Apply(instance);
    }

    return instance;
}

/**
 * @brief Destroys the object using the appropriate allocator.
 * The object type must meet the following requirements:
 * 1) Define a `GetAllocator()` member method or scoped type `AllocatorType`.
 * 2) To be destructible. If the type is polymorphic, it must have a virtual destructor.
 *
 * @tparam T The object type.
 * @param aPtr The object pointer.
 */
template<typename T>
requires detail::IsDestructible<T> && detail::HasAnyAllocator<T>
inline void Delete(T* aPtr)
{
    auto allocator = GetAllocator<T>(aPtr);

    if constexpr (BeforeDestructedHook<T>::value)
    {
        BeforeDestructedHook<T>::Apply(aPtr);
    }

    aPtr->~T();
    allocator->Free(aPtr);
}

/**
 * @brief Gets the allocator instance of given type.
 *
 * @tparam T The allocator type.
 * @return The allocator instance.
 */
template<typename T>
requires detail::IsAllocator<T>
inline IAllocator* GetAllocator()
{
    return T::Get();
}

/**
 * @brief Gets the allocator associated with the type.
 *
 * @tparam T The object type.
 * @return The allocator instance.
 */
template<typename T>
requires detail::HasStaticAllocator<T>
inline IAllocator* GetAllocator()
{
    if constexpr (AllocatorHook<T>::value)
    {
        return AllocatorHook<T>::Get();
    }
    else
    {
        return GetAllocator<detail::ResolveAllocatorType<T>>();
    }
}

/**
 * @brief Gets the allocator associated with the object.
 *
 * @tparam T The object type.
 * @param aPtr The object pointer.
 * @return The allocator instance.
 */
template<typename T>
requires detail::HasAnyAllocator<T>
inline IAllocator* GetAllocator(T* aPtr)
{
    if constexpr (detail::HasDynamicAllocator<T>)
    {
        return aPtr->GetAllocator();
    }
    else
    {
        return GetAllocator<T>();
    }
}
} // namespace RED4ext::Memory
