#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct IRTTIType;

struct ISerializable
{
    virtual IRTTIType* GetType() = 0;
    virtual IRTTIType* GetParentType() = 0;
    virtual void sub_10() = 0;
    virtual ~ISerializable() = 0;

    virtual void sub_20() = 0;
    virtual void sub_28() = 0;
    virtual void sub_30() = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;
    virtual void sub_68() = 0;
    virtual void sub_70() = 0;
    virtual void sub_78() = 0;
    virtual void sub_80() = 0;
    virtual void sub_88() = 0;
    virtual void sub_90() = 0;
    virtual void sub_98() = 0;
    virtual void sub_A0() = 0;
    virtual void sub_A8() = 0;
    virtual void sub_B0() = 0;
    virtual void sub_B8() = 0;
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;

    int64_t unk8;
    int64_t unk10;
    int64_t unk18;
    int64_t unk20;
    int64_t unk28;
};
RED4EXT_ASSERT_SIZE(ISerializable, 0x30);
} // namespace RED4ext
