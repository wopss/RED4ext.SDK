#pragma once

#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct IRTTIType;
struct CClass;

struct CProperty
{
    IRTTIType* type;
    CName name;
    CName group;
    CClass* parent;
    uint32_t valueOffset;
    uint64_t flags;
};
RED4EXT_ASSERT_SIZE(CProperty, 0x30);
RED4EXT_ASSERT_OFFSET(CProperty, type, 0x0);
RED4EXT_ASSERT_OFFSET(CProperty, name, 0x8);
RED4EXT_ASSERT_OFFSET(CProperty, parent, 0x18);
RED4EXT_ASSERT_OFFSET(CProperty, valueOffset, 0x20);
RED4EXT_ASSERT_OFFSET(CProperty, flags, 0x28);
} // namespace RED4ext
