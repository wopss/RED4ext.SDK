#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CNamePool.hpp>
#endif

#include "CNamePool.hpp"
#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const char* aText)
{
    CName result;

    static const UniversalRelocFunc<CName* (*)(CName&, const char*)> func(Detail::AddressHashes::CNamePool_AddCstr);
    func(result, aText);
    return result;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const CString& aText)
{
    CName result;

    static const UniversalRelocFunc<CName* (*)(CName&, const CString&)> func(
        Detail::AddressHashes::CNamePool_AddCString);
    func(result, aText);
    return result;
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const char* aText)
{
    static const UniversalRelocFunc<uint8_t (*)(const CName&, const char*)> func(
        Detail::AddressHashes::CNamePool_AddPair);
    func(aName, aText);
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const CString& aText)
{
    Add(aName, aText.c_str());
}

RED4EXT_INLINE const char* RED4ext::CNamePool::GetString(const CName& aName)
{
    static const UniversalRelocFunc<const char* (*)(const CName&)> func(Detail::AddressHashes::CNamePool_GetString);
    auto result = func(aName);
    if (result)
    {
        return result;
    }

    return "";
}

RED4EXT_INLINE RED4ext::CNamePool* RED4ext::CNamePool::Get()
{
    static const UniversalRelocFunc<CNamePool* (*)()> func(Detail::AddressHashes::CNamePool_Get);
    return func();
}

RED4EXT_INLINE const RED4ext::CNamePoolNode* RED4ext::CNamePoolNode::NextInList() const
{
    return &CNamePoolAllocator::CNamePoolNodeAllocWrapper::GetWrapper(this)->NextInList()->inner;
}

RED4EXT_INLINE const RED4ext::CNamePoolNode* RED4ext::CNamePoolNode::NextInHashBin() const
{
    return next;
}

RED4EXT_INLINE const RED4ext::CNamePoolAllocator::CNamePoolNodeAllocWrapper* RED4ext::CNamePoolAllocator::
    CNamePoolNodeAllocWrapper::NextInList() const
{
    return std::bit_cast<CNamePoolNodeAllocWrapper*>(std::bit_cast<uintptr_t>(&inner) + len);
}

RED4EXT_INLINE const RED4ext::CNamePoolAllocator::CNamePoolNodeAllocWrapper* RED4ext::CNamePoolAllocator::
    CNamePoolNodeAllocWrapper::NextInHashBin() const
{
    return GetWrapper(inner.next);
}

RED4EXT_INLINE const RED4ext::CNamePoolAllocator::CNamePoolNodeAllocWrapper& RED4ext::CNamePoolAllocator::
    CNamePoolNodeAllocWrapper::GetWrapper(const CNamePoolNode& aNode)
{
    return *GetWrapper(&aNode);
}

RED4EXT_INLINE const RED4ext::CNamePoolAllocator::CNamePoolNodeAllocWrapper* RED4ext::CNamePoolAllocator::
    CNamePoolNodeAllocWrapper::GetWrapper(const CNamePoolNode* aNode)
{
    return std::bit_cast<const CNamePoolNodeAllocWrapper*>(std::bit_cast<uintptr_t>(aNode) -
                                                           offsetof(CNamePoolNodeAllocWrapper, inner));
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

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator::reference RED4ext::CNamePoolAllocator::Iterator::operator*() const
{
    return m_node->inner;
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator::pointer RED4ext::CNamePoolAllocator::Iterator::operator->() const
{
    return &m_node->inner;
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator RED4ext::CNamePoolAllocator::Begin() const
{
    return Iterator(this);
}

RED4EXT_INLINE RED4ext::CNamePoolAllocator::Iterator RED4ext::CNamePoolAllocator::End() const
{
    return Iterator(this, listEnd);
}

RED4EXT_INLINE const RED4ext::CNamePoolNode* const& RED4ext::CNamePoolHashmap::operator[](const uint64_t aKey) const
{
    return nodesByHash[aKey & 0x7ffff];
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::Begin(const CName& aKey) const
{
    return Iterator((*this)[aKey]);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::Begin(const uint64_t aKey) const
{
    return Iterator((*this)[aKey]);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::End(const CName&) const
{
    return Iterator(nullptr);
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator RED4ext::CNamePoolHashmap::End(const uint64_t) const
{
    return Iterator(nullptr);
}

RED4EXT_INLINE const RED4ext::CNamePoolNode* const& RED4ext::CNamePoolHashmap::operator[](const CName& aKey) const
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

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator::reference RED4ext::CNamePoolHashmap::Iterator::operator*() const
{
    return m_node;
}

RED4EXT_INLINE RED4ext::CNamePoolHashmap::Iterator::reference RED4ext::CNamePoolHashmap::Iterator::operator->() const
{
    return m_node;
}
