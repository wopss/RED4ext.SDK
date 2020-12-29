#pragma once

#include <cstddef>

#ifdef RED4EXT_STATIC_LIB
#undef RED4EXT_HEADER_ONLY
#define RED4EXT_INLINE
#else
#define RED4EXT_HEADER_ONLY
#define RED4EXT_INLINE inline
#endif

#ifndef RED4EXT_ASSERT_SIZE
#define RED4EXT_ASSERT_SIZE(cls, size)                                                                                 \
    static_assert(sizeof(cls) == size, #cls " size does not match the expected size (" #size ") ")
#endif

#ifndef RED4EXT_ASSERT_OFFSET
#define RED4EXT_ASSERT_OFFSET(cls, mbr, offset)                                                                        \
    static_assert(offsetof(cls, mbr) == offset, #cls "::" #mbr " is not on the expected offset (" #offset ")")
#endif
