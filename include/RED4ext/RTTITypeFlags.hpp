#pragma once

#include <cstdint>

namespace RED4ext
{
struct ClassFlags
{
    uint32_t None : 1;
    uint32_t isAbstract : 1;
    uint32_t b2 : 1;
    uint32_t b3 : 1;
    uint32_t isStruct : 1;
    uint32_t b5 : 1;
    uint32_t isImportOnly : 1;
    uint32_t isPrivate : 1;
    uint32_t isProtected : 1;
    uint32_t isTestOnly : 1;
    uint32_t b10 : 22;
};
RED4EXT_ASSERT_SIZE(ClassFlags, 0x4);
} // namespace RED4ext
