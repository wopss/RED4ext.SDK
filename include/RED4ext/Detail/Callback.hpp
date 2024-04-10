#pragma once

#include <type_traits>

#include <RED4ext/Detail/Function.hpp>

namespace RED4ext
{
template<typename R, typename... Args>
struct CallbackHandler;

namespace Detail
{
template<typename R, typename... Args>
struct UnboundFunctionTarget
{
    using TargetFunc = UnboundFunctionPtr<R, Args...>;

    TargetFunc func;
};

template<typename C, typename R, typename... Args>
struct MemberFunctionTarget
{
    using TargetFunc = MemberFunctionPtr<C, R, Args...>;
    using ContextPtr = C*;

    ContextPtr context;
    TargetFunc func;
};

template<typename L, typename R, typename... Args>
requires IsClosure<L, R, Args...>
struct ClosureTarget : L
{
    using ClosureType = L;
};

template<typename T>
struct CallbackHandlerImpl;

template<typename R, typename... Args>
struct CallbackHandlerImpl<UnboundFunctionTarget<R, Args...>>
{
    using TargetType = UnboundFunctionTarget<R, Args...>;

    static R Invoke(const TargetType* aTarget, Args&&... aArgs)
    {
        std::invoke(aTarget->func, std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        aDst->func = aSrc->func;
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        aDst->func = aSrc->func;
        aSrc->func = nullptr;
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->func = nullptr;
    }
};

template<typename C, typename R, typename... Args>
struct CallbackHandlerImpl<MemberFunctionTarget<C, R, Args...>>
{
    using TargetType = MemberFunctionTarget<C, R, Args...>;

    static R Invoke(const TargetType* aTarget, Args&&... aArgs)
    {
        std::invoke(aTarget->func, aTarget->context, std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        aDst->context = aSrc->context;
        aDst->func = aSrc->func;
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        aDst->context = aSrc->context;
        aDst->func = aSrc->func;
        aSrc->context = nullptr;
        aSrc->func = nullptr;
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->context = nullptr;
        aTarget->func = nullptr;
    }
};

template<typename L, typename R, typename... Args>
requires IsClosure<L, R, Args...>
struct CallbackHandlerImpl<ClosureTarget<L, R, Args...>>
{
    using TargetType = typename ClosureTarget<L, R, Args...>::ClosureType;

    static R Invoke(const TargetType* aTarget, Args&&... aArgs)
    {
        (*aTarget)(std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        new (aDst) TargetType(*aSrc);
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        new (aDst) TargetType(std::move(*aSrc));
        aSrc->~TargetType();
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->~TargetType();
    }
};

template<typename Impl, typename R, typename... Args>
struct CallbackHandlerFactory
{
    using HandlerType = CallbackHandler<R, Args...>;

    static HandlerType* Get() noexcept
    {
        static HandlerType s_handler{&Impl::Invoke, &Impl::Copy, &Impl::Move, &Impl::Destruct};
        return &s_handler;
    }
};
} // namespace Detail
} // namespace RED4ext
