#pragma once

#include <RED4ext/Memory/Utils.hpp>

namespace RED4ext
{
class IRenderObject
{
    template<std::derived_from<IRenderObject> T>
    friend class TRenderPtr;

    using AllocatorType = Memory::RenderDataAllocator;

    virtual Memory::IAllocator* GetAllocator()
    {
        return AllocatorType::Get();
    }

    virtual void Destroy()
    {
        Memory::Delete(this);
    }

    virtual ~IRenderObject() = default;

protected:
    void Release()
    {
        if (--m_refCount < 1)
        {
            Destroy();
        }
    }

    void AddRef()
    {
        m_refCount++;
    }

    std::atomic<int32_t> m_refCount{1};
};
RED4EXT_ASSERT_SIZE(IRenderObject, 0x10);

template<std::derived_from<IRenderObject> T = IRenderObject>
class TRenderPtr
{
public:
    TRenderPtr() = default;

    ~TRenderPtr()
    {
        Release();
    }

    TRenderPtr(std::nullptr_t) noexcept
    {
    }

    explicit TRenderPtr(T* aPointer) noexcept
        : m_instance(aPointer)
    {
    }

    TRenderPtr(const TRenderPtr& aOther) noexcept
        : m_instance(aOther.m_instance)
    {
        if (m_instance)
        {
            m_instance->AddRef();
        }
    }

    TRenderPtr(TRenderPtr&& aOther) noexcept
    {
        Swap(aOther);
    }

    explicit operator bool() const noexcept
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

    T& operator*() const noexcept
    {
        return *m_instance;
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
    void Release()
    {
        if (m_instance)
            m_instance->Release();
    }

    T* m_instance{nullptr};
};
RED4EXT_ASSERT_SIZE(TRenderPtr<>, 0x8);
} // namespace RED4ext
