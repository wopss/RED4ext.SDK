#pragma once

#include <RED4ext/Memory/Utils.hpp>

namespace RED4ext
{
struct IRenderData
{
    using AllocatorType = Memory::RenderDataAllocator;

    virtual Memory::IAllocator* GetAllocator()
    {
        return AllocatorType::Get();
    }

    virtual void Destroy()
    {
        if (this)
        {
            Memory::Delete(this);
        }
    }

    virtual ~IRenderData() = default;

    void Release()
    {
        if (--refCount < 1)
            Destroy();
    }

    void AddRef()
    {
        refCount++;
    }

    std::atomic<int32_t> refCount = 1;
};
RED4EXT_ASSERT_SIZE(IRenderData, 0x10);

template<std::derived_from<IRenderData> T = IRenderData>
class TRenderPtr
{
    TRenderPtr() = default;

    ~TRenderPtr() noexcept
    {
        Release();
    }

    TRenderPtr(std::nullptr_t) noexcept
    {
    }

    template<std::derived_from<IRenderData> U>
    explicit TRenderPtr(U* aPointer) noexcept
        : m_instance(aPointer)
    {
    }

    TRenderPtr(const TRenderPtr& aOther) noexcept
        : m_instance(aOther.m_instance)
    {
        if (m_instance)
            m_instance->AddRef();
    }

    TRenderPtr(TRenderPtr&& aOther) noexcept
    {
        Swap(aOther);
    }

    operator bool() const noexcept
    {
        return m_instance != nullptr;
    }

    TRenderPtr& operator=(const TRenderPtr& aRhs) noexcept
    {
        TRenderPtr(aRhs).Swap(*this);
        return *this;
    }

    TRenderPtr& operator=(TRenderPtr&& aRhs) noexcept
    {
        Swap(aRhs);
        return *this;
    }

    T* operator->() const noexcept
    {
        return m_instance;
    }

    void Swap(TRenderPtr& aOther) noexcept
    {
        std::swap(m_instance, aOther.m_instance);
    }

    T* GetPtr() const noexcept
    {
        return m_instance;
    }

private:
    void Release() noexcept
    {
        if (m_instance)
            m_instance->Release();
    }

    T* m_instance = nullptr;
};
RED4EXT_ASSERT_SIZE(TRenderPtr<>, 0x08);
} // namespace RED4ext
