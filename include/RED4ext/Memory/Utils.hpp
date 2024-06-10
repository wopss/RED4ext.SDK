#pragma once

#include <type_traits>

#include <RED4ext/Detail/Memory.hpp>
#include <RED4ext/Memory/Allocators.hpp>

namespace RED4ext::Memory
{
template<typename T>
concept IsNewCompatible = Detail::HasStaticAllocatorOrHook<T>;

template<typename T>
concept IsDeleteCompatible = Detail::HasAnyAllocatorOrHook<T> && Detail::IsSafeDestructible<T>;

/**
 * @brief Gets the allocator instance of given type.
 *
 * @tparam T The allocator type.
 * @return The allocator instance.
 */
template<typename T>
requires Detail::IsAllocator<T>
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
requires Detail::HasStaticAllocatorOrHook<T>
inline IAllocator* GetAllocator()
{
    if constexpr (Detail::AllocatorHook<T>::value)
    {
        return Detail::AllocatorHook<T>::Get();
    }
    else
    {
        return GetAllocator<Detail::ResolveAllocatorType<T>>();
    }
}

/**
 * @brief Gets the allocator associated with the object.
 *
 * @tparam T The object type.
 * @param aInstance The object pointer.
 * @return The allocator instance.
 */
template<typename T>
requires Detail::HasAnyAllocatorOrHook<T>
inline IAllocator* GetAllocator(T* aInstance)
{
    if constexpr (Detail::HasDynamicAllocator<T>)
    {
        return aInstance->GetAllocator();
    }
    else
    {
        return GetAllocator<T>();
    }
}

/**
 * @brief Creates a new object using the appropriate allocator.
 * The object type must define a scoped type `AllocatorType`.
 *
 * @tparam T The object type.
 * @tparam Args The type of the constructor arguments.
 * @param aArgs The constructor arguments.
 * @return The object pointer.
 */
template<typename T, typename... Args>
requires IsNewCompatible<T>
inline T* New(Args&&... aArgs)
{
    return New<T>(GetAllocator<T>(), std::forward<Args>(aArgs)...);
}

/**
 * @brief Destroys the object using the appropriate allocator.
 * The object type must meet the following requirements:
 * 1) Define a `GetAllocator()` member method or scoped type `AllocatorType`.
 * 2) To be destructible. If the type is polymorphic, it must have a virtual destructor.
 *
 * @tparam T The object type.
 * @param aInstance The object pointer.
 */
template<typename T>
requires IsDeleteCompatible<T>
inline void Delete(T* aInstance)
{
    Delete(GetAllocator<T>(aInstance), aInstance);
}

/**
 * @brief Creates a new object using provided allocator.
 *
 * @tparam A The allocator type.
 * @tparam T The object type.
 * @tparam Args The type of the constructor arguments.
 * @param aArgs The constructor arguments.
 * @return The object pointer.
 */
template<typename A, typename T, typename... Args>
requires Detail::IsAllocator<A>
inline T* New(Args&&... aArgs)
{
    return New<T>(GetAllocator<A>(), std::forward<Args>(aArgs)...);
}

/**
 * @brief Destroys the object using provided allocator.
 * The object type must be destructible.
 * If the type is polymorphic, it must have a virtual destructor.
 *
 * @tparam A The allocator type.
 * @tparam T The object type.
 * @param aInstance The object pointer.
 */
template<typename A, typename T>
requires Detail::IsAllocator<A> && Detail::IsSafeDestructible<T>
inline void Delete(T* aInstance)
{
    Delete(GetAllocator<A>(), aInstance);
}

/**
 * @brief Creates a new object using provided allocator.
 *
 * @tparam T The object type.
 * @tparam Args The type of the constructor arguments.
 * @param aAllocator The allocator instance.
 * @param aArgs The constructor arguments.
 * @return The object pointer.
 */
template<typename T, typename... Args>
inline T* New(IAllocator* aAllocator, Args&&... aArgs)
{
    auto instance = aAllocator->template Alloc<T>();

    if constexpr (Detail::ConstructorHook<T>::value)
    {
        Detail::ConstructorHook<T>::Apply(instance);
    }
    else
    {
        new (instance) T(std::forward<Args>(aArgs)...);
    }

    if constexpr (Detail::AfterConstructedHook<T>::value)
    {
        Detail::AfterConstructedHook<T>::Apply(instance);
    }

    return instance;
}

/**
 * @brief Destroys the object using provided allocator.
 * The object type must be destructible.
 * If the type is polymorphic, it must have a virtual destructor.
 *
 * @tparam T The object type.
 * @param aAllocator The allocator instance.
 * @param aInstance The object pointer.
 */
template<typename T>
requires Detail::IsSafeDestructible<T>
inline void Delete(IAllocator* aAllocator, T* aInstance)
{
    if constexpr (Detail::BeforeDestructedHook<T>::value)
    {
        Detail::BeforeDestructedHook<T>::Apply(aInstance);
    }

    aInstance->~T();
    aAllocator->Free(aInstance);
}
} // namespace RED4ext::Memory
