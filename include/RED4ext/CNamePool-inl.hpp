#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CNamePool.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const char* aText)
{
    CName result;

    static UniversalRelocFunc<CName* (*)(CName&, const char*)> func(Detail::AddressHashes::CNamePool_AddCstr);
    func(result, aText);
    return result;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const CString& aText)
{
    CName result;

    static UniversalRelocFunc<CName* (*)(CName&, const CString&)> func(Detail::AddressHashes::CNamePool_AddCString);
    func(result, aText);
    return result;
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const char* aText)
{
    static UniversalRelocFunc<uint8_t (*)(const CName&, const char*)> func(Detail::AddressHashes::CNamePool_AddPair);
    func(aName, aText);
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const CString& aText)
{
    Add(aName, aText.c_str());
}

RED4EXT_INLINE const char* RED4ext::CNamePool::GetString(const CName& aName)
{
    static UniversalRelocFunc<const char* (*)(const CName&)> func(Detail::AddressHashes::CNamePool_GetString);
    auto result = func(aName);
    if (result)
    {
        return result;
    }

    return "";
}

RED4EXT_INLINE RED4ext::CNamePool* RED4ext::CNamePool::Get()
{
    static UniversalRelocFunc<CNamePool* (*)()> func(Detail::AddressHashes::CNamePool_Get);
    return func();
}

RED4EXT_INLINE RED4ext::CNamePoolNode* RED4ext::CNamePoolNodeInner::Outer()
{
    return reinterpret_cast<CNamePoolNode*>(reinterpret_cast<uintptr_t>(this) - offsetof(CNamePoolNode, inner));
}

RED4EXT_INLINE RED4ext::CNamePoolNodeInner* RED4ext::CNamePoolNodeInner::NextInList() const
{
    return &const_cast<CNamePoolNodeInner*>(this)->Outer()->NextInList()->inner;
}

RED4EXT_INLINE RED4ext::CNamePoolNodeInner* RED4ext::CNamePoolNodeInner::NextInHashBin()
{
    return next;
}

RED4EXT_INLINE RED4ext::CNamePoolNode* RED4ext::CNamePoolNode::NextInList() const
{
    return reinterpret_cast<CNamePoolNode*>(reinterpret_cast<uintptr_t>(&inner) + len);
}

RED4EXT_INLINE RED4ext::CNamePoolNode* RED4ext::CNamePoolNode::NextInHashBin()
{
    return inner.next->Outer();
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator& RED4ext::CNamePoolAllocator::Iterator::operator++()
{
    m_node = m_node->NextInList();
    return *this;
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator& RED4ext::CNamePoolAllocator::Iterator::operator+(const int aN)
{
    if (aN <= 0)
        return *this;
    for (int i = 0; i < aN; i++)
        m_node = m_node->NextInList();
    return *this;
}

RED4EXT_INLINE bool RED4ext::CNamePoolAllocator::Iterator::operator==(const Iterator& aRhs) const
{
    return m_node == aRhs.m_node;
}

RED4EXT_INLINE bool RED4ext::CNamePoolAllocator::Iterator::operator!=(const Iterator& aRhs) const
{
    return m_node != aRhs.m_node;
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator::reference RED4ext::CNamePoolAllocator::Iterator::operator*()
{
    return m_node;
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator RED4ext::CNamePoolAllocator::Begin()
{
    return Iterator(this);
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator RED4ext::CNamePoolAllocator::End()
{
    return Iterator(this, listEnd);
}

RED4EXT_INLINE RED4ext::CNamePoolNodeInner*& RED4ext::CNamePoolHashmap::operator[](const uint64_t aKey)
{
    return nodesByHash[aKey & 0x7ffff];
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::Begin(const CName& aKey)
{
    return Iterator((*this)[aKey]);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::Begin(const uint64_t aKey)
{
    return Iterator((*this)[aKey]);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::End(const CName& aKey)
{
    return Iterator(nullptr);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::End(const uint64_t aKey)
{
    return Iterator(nullptr);
}

RED4EXT_INLINE RED4ext::CNamePoolNodeInner*& RED4ext::CNamePoolHashmap::operator[](const CName& aKey)
{
    return nodesByHash[aKey.hash & 0x7ffff];
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator& RED4ext::CNamePoolHashmap::Iterator::operator++()
{
    m_node = m_node->NextInHashBin();
    return *this;
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator& RED4ext::CNamePoolHashmap::Iterator::operator+(const int aN)
{
    if (aN <= 0)
        return *this;
    for (int i = 0; i < aN; i++)
        m_node = m_node->NextInHashBin();
    return *this;
}

RED4EXT_INLINE bool RED4ext::CNamePoolHashmap::Iterator::operator==(const Iterator& aRhs) const
{
    return m_node == aRhs.m_node;
}

RED4EXT_INLINE bool RED4ext::CNamePoolHashmap::Iterator::operator!=(const Iterator& aRhs) const
{
    return m_node != aRhs.m_node;
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator::reference RED4ext::CNamePoolHashmap::Iterator::operator*()
{
    return m_node;
}
