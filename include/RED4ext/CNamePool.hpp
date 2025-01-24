#pragma once

#include "DynArray.hpp"
#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>

namespace RED4ext
{
struct CNamePoolNode;

/**
 * @brief The primary type for storing CNames in a CNamePool. This type is an implementation detail of CNamePool.
 *
 * Values of this type are always allocated in CNamePool#allocator, and are always contained by a CNamePoolNode.
 *
 * Note that this type uses a flexible array and is thus unsized.
 */
struct CNamePoolNodeInner
{
    CNamePoolNodeInner() = delete;
    /// @brief The CName corresponding to #str (in other words, the FNV1a64 hash of #str)
    const CName cname; // 00

    /// @brief The next node in the hash bucket containing this node
    CNamePoolNodeInner* next; // 08

    /// @brief The total size of this struct in bytes
    const uint32_t len : 8; // 10

    /// @brief The index of this node in CNamePoolAllocator
    const uint32_t cnameListIndex : 24; // 11

    /// @brief The corresponding string for #cname
    const char str[]; // 14
    // if necessary, there is padding after this to align with a DWORD boundary

    /**
     * @brief Gets the next CNamePoolNodeInner that was allocated, chronologically speaking
     *
     * The returned CNamePoolNodeInner may be empty (uninitialized) in the case that this is the most recently
     * allocated node, but the pointer will not be null
     */
    CNamePoolNodeInner* NextInList() const;

    /**
     * @brief Gets the next CNamePoolNodeInner in this hash bin
     *
     * May be null
     */
    CNamePoolNodeInner* NextInHashBin();

    /**
     * @brief Gets the CNamePoolNode that contains this CNamePoolNodeInner
     */
    CNamePoolNode* Outer();
};
RED4EXT_ASSERT_OFFSET(CNamePoolNodeInner, cname, 0x00);
RED4EXT_ASSERT_OFFSET(CNamePoolNodeInner, next, 0x08);
// we can't assert the offset of `len` and `cnameListIndex` because they're bitfields
// maybe switch to doing the bit manipulation ourselves?
RED4EXT_ASSERT_OFFSET(CNamePoolNodeInner, str, 0x14);

/**
 * @brief The type of nodes allocated in a CNamePoolAllocator. This type is an implementation detail of
 * CNamePoolAllocator.
 *
 * This type is just an allocator wrapper type containing the size of the allocation and then the allocation. You
 * probably don't need to even know this type exists.
 */
struct CNamePoolNode
{
    CNamePoolNode() = delete;
#pragma pack(push, 4)
    /// @brief The size of #inner in bytes
    const uint32_t len; // 00
    /// @brief The actual allocated space
    CNamePoolNodeInner inner; // 04
#pragma pack(pop)

    /**
     * @brief Gets the next CNamePoolNode that was allocated, chronologically speaking
     *
     * The returned CNamePoolNode may be empty (uninitialized) in the case that this is the most recently allocated
     * node, but the pointer will not be null
     */
    CNamePoolNode* NextInList() const;

    /**
     * @brief Gets the next CNamePoolNode in this hash bin
     *
     * May be null
     */
    CNamePoolNode* NextInHashBin();
};
RED4EXT_ASSERT_OFFSET(CNamePoolNode, len, 0x00);
RED4EXT_ASSERT_OFFSET(CNamePoolNode, inner, 0x04);

/**
 * @brief An allocation pool/arena for CNamePoolNodes
 *
 * The single type of this value (stored at CNamePool#allocator) contains every CNamePoolNode ever allocated.
 */
struct CNamePoolAllocator
{
    class Iterator
    {
        typedef std::forward_iterator_tag iterator_category;
        typedef CNamePoolNode* value_type;
        typedef std::ptrdiff_t difference_type;
        typedef CNamePoolNode** pointer;
        typedef CNamePoolNode*& reference;
        CNamePoolAllocator* m_list;
        CNamePoolNode* m_node;

    public:
        explicit Iterator(CNamePoolAllocator* aList)
            : m_list(aList)
            , m_node(aList->head)
        {
        }
        explicit Iterator(CNamePoolAllocator* aList, CNamePoolNode* aNode)
            : m_list(aList)
            , m_node(aNode)
        {
        }
        Iterator& operator++();
        Iterator& operator+(int aN);
        bool operator==(const Iterator& aRhs) const;
        bool operator!=(const Iterator& aRhs) const;
        reference operator*();
    };

    /**
     * @brief The beginning of an iterator over every CNamePoolNode
     *
     * Automatically handles the pointer arithmetic necessary to deal with nodes being unsized. Note that there may
     * be duplicates.
     */
    Iterator Begin();

    /**
     * @brief The end of an iterator over every CNamePoolNode
     */
    Iterator End();

    /// @brief The beginning of the allocation arena
    ///
    /// All CNamePoolNodes should exist between this pointer and #endAvailableSpace.
    ///
    /// Note that because CNamePoolNode is unsized, you should not perform regular pointer arithmetic on this pointer.
    /// Instead, use the provided methods in CNamePoolNode.
    CNamePoolNode* head; // 00
    /// @brief The end of the area available to be used, starting from #head
    CNamePoolNode* endAvailableSpace; // 08
    /// @brief The end of the currently used area in #head
    CNamePoolNode* listEnd; // 10
    // I believe these three pointers would be used if more space than `head` has available is needed, but the amount
    // of allocated space is so large that it shouldn't come up
    CNamePoolNode* unkNodePtr;  // 18
    CNamePoolNode* unkNodePtr2; // 20
    CNamePoolNode* unkNodePtr3; // 28
    // potentially padding
    char unk[8]; // 30
    // some kind of memory allocation handler, or something like that
    void* unkPtr; // 38
    // should always be 0x8_0000
    uint32_t unk2; // 40
    // should always be 3
    uint32_t unk3; // 44
};
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, head, 0x00);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, endAvailableSpace, 0x08);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, listEnd, 0x10);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unkNodePtr, 0x18);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unkNodePtr2, 0x20);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unkNodePtr3, 0x28);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unk, 0x30);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unkPtr, 0x38);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unk2, 0x40);
RED4EXT_ASSERT_OFFSET(CNamePoolAllocator, unk3, 0x44);
RED4EXT_ASSERT_SIZE(CNamePoolAllocator, 0x48);

/**
 * @brief A hashmap mapping from CName to string
 *
 * The inner structure of this type is essentially a standard data structures 101 hashmap. CNamePoolHashmap#nodesByHash
 * is a list of bins indexed by `hash % numBins` (so `hash % 0x80000` or `hash & 0x7ffff`), each bin being a linked
 * list where the data is a key-value pair.
 */
struct CNamePoolHashmap
{
    class Iterator
    {
        typedef std::forward_iterator_tag iterator_category;
        typedef CNamePoolNode* value_type;
        typedef std::ptrdiff_t difference_type;
        typedef CNamePoolNodeInner** pointer;
        typedef CNamePoolNodeInner*& reference;
        CNamePoolNodeInner* m_node;

    public:
        explicit Iterator(CNamePoolNodeInner* aNode)
            : m_node(aNode)
        {
        }
        Iterator& operator++();
        Iterator& operator+(int aN);
        bool operator==(const Iterator& aRhs) const;
        bool operator!=(const Iterator& aRhs) const;
        reference operator*();
    };
    /// @brief The hashmap mapping from CName hash to string
    ///
    /// After locking hashmapLock (if you want to play nice), index this array using `CName.hash & 0x7ffff` or
    /// `CName.hash % 0x80000`. The resulting value is the hash bucket for that hash. If it's null, the bucket is empty.
    /// Otherwise, you can iterate over the bucket's contents with CNamePoolNodeInner::NextInHashBin().
    CNamePoolNodeInner* nodesByHash[0x80000]; // 00

    /**
     * @brief Gets the hash bin that would contain the given CName as a key
     *
     * Note that the returned hash bin may be empty (null), and may not contain the given CName. If you just want the
     * string value of a CName, use CNamePool::Get.
     */
    CNamePoolNodeInner*& operator[](const CName& aKey);

    /**
     * @brief Gets the hash bin that would contain the given FNV1a64 hash as a key
     *
     * Note that the returned hash bin may be empty (null), and may not contain the given hash. If you just want the
     * string value of a CName, use CNamePool::Get.
     */
    CNamePoolNodeInner*& operator[](uint64_t aKey);

    /// @brief The beginning of an iterator over the hash bucket that would contain @p aKey
    Iterator Begin(const CName& aKey);
    /// @brief The beginning of an iterator over the hash bucket that would contain @p aKey
    Iterator Begin(uint64_t aKey);

    /// @brief The end of an iterator over the hash bucket that would contain @p aKey
    Iterator End(const CName& aKey);
    /// @brief The end of an iterator over the hash bucket that would contain @p aKey
    Iterator End(uint64_t aKey);
};
RED4EXT_ASSERT_OFFSET(CNamePoolHashmap, nodesByHash, 0x0);
RED4EXT_ASSERT_SIZE(CNamePoolHashmap, 0x400000);

/**
 * @brief A singleton; the global registry of CNames, allowing conversion from a CName (which is a hash) to the string
 * it was created from
 *
 * @par Basics
 * CNames are simply FNV1a64 hashes of strings. The game uses these instead of raw strings in many places, as a 64-bit
 * hash is very efficient. However, as hashes are one-way, there needs to be a mapping from each hash back to its
 * corresponding string. That's the role of CNamePool.
 *
 * @par Usage
 * Any time a CName is created from a string, it's the creating code's responsibility to ensure that CName is registered
 * in the CNamePool. This can be done in several ways, but the simplest is calling Add(). Then, the original string can
 * be retrieved by calling Get().
 *
 * @par The hashmap
 * The core of the CNamePool is a hashmap, CNamePool#hashmap. Since CNames are already a hash, the map is indexed by
 * `CName % 0x80000` (optimized to`CName & 0x7ffff`). Values in the map are of type `CNamePoolNodeInner *`, and each is
 * effectively its own bucket, thanks to CNamePoolNodeInner#next.
 *
 * @par Implementation details
 * When the function to add a CName is called, the game first checks whether that CName already exists in the hashmap.
 * If it does, it returns; however, seemingly due to shenanigans with the spin lock, the following steps may be taken
 * after the CName is added to the hashmap. This is important because it means there may be duplicates in
 * CNamePoolAllocator.
 *
 * @par
 * Next, the game allocates and initializes a CNamePoolNode in the CNamePoolAllocator. Note that, because CNamePoolNode
 * is an unsized type (it includes a C-style flexible array), the size of the allocated value depends on the size of the
 * string it contains. The allocation is also end-padded to a 4-byte alignment. The details of the actual allocation are
 * somewhat complicated in the game's code due to some seemingly-vestigial members of the list, so that won't be covered
 * here.
 *
 * @par
 * Once the new node is allocated and initialized, the game attempts to add it to the hashmap (CNamePool#hashmap). This
 * is done by indexing into the map and iterating over `->next` until either it finds a node with the same hash as
 * what it's trying to add (in which case it returns), or until `->next` is null (in which case it sets `->next` to the
 * node it's trying to add and adds the node to CNamePool#nodes).
 */
struct CNamePool
{
    static CName Add(const char* aText);
    static CName Add(const CString& aText);

    /**
     * @brief Add a hash and text pair.
     * @param aName The hash for \p aText
     * @param aText The text.
     */
    static void Add(const CName& aName, const char* aText);

    /**
     * @brief Add a hash and text pair.
     * @param aName The hash for \p aText
     * @param aText The text.
     */
    static void Add(const CName& aName, const CString& aText);

    /**
     * Finds the string value of a CName, if that CName was ever added to the CNamePool
     * @param aName The CName to find the string value of
     * @return The string value of @p aName, if it was ever added to the pool, otherwise null
     */
    static const char* Get(const CName& aName);

    /**
     * Gets the singleton CNamePool value
     * @return The singleton CNamePool value
     */
    static CNamePool* GetPool();

    /// @brief The lock for state owned directly by CNamePool
    ///
    /// This should be locked whenever accessing #nodes or #hashmap. A shared lock may be used for read-only access.
    /// For write access, a unique lock is required.
    SharedSpinLock hashmapLock; // 00

    /// @brief A list of every CNamePoolNodeInner ever added to #hashmap.
    ///
    /// Notably, unlike #allocator, this should never contain duplicates.
    DynArray<CNamePoolNodeInner*> nodes; // 08

    /// @brief The hashmap mapping from CName hash to string
    CNamePoolHashmap hashmap; // 18

    /// @brief The lock for #allocator
    ///
    /// This should be locked whenever accessing #allocator. A shared lock may be used for read-only access. For write
    /// access, a unique lock is required.
    SharedSpinLock listLock; // 400018

    // potentially padding
    uint64_t unk2[4]; // 400020

    /// @brief Essentially an allocation arena for `CNamePoolNode`s
    /// @sa CNamePoolAllocator
    CNamePoolAllocator allocator; // 400040
};
RED4EXT_ASSERT_OFFSET(CNamePool, hashmapLock, 0x00);
RED4EXT_ASSERT_OFFSET(CNamePool, nodes, 0x08);
RED4EXT_ASSERT_OFFSET(CNamePool, hashmap, 0x18);
RED4EXT_ASSERT_OFFSET(CNamePool, listLock, 0x400018);
RED4EXT_ASSERT_OFFSET(CNamePool, unk2, 0x400020);
RED4EXT_ASSERT_OFFSET(CNamePool, allocator, 0x400040);
RED4EXT_ASSERT_SIZE(CNamePool, 0x400088);

} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CNamePool-inl.hpp>
#endif
