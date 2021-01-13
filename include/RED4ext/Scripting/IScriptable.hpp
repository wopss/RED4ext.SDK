#pragma once

#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct IScriptable : ISerializable
{
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;

    void* GetValueHolder();

    int64_t unk30;
    int64_t unk38;
};
RED4EXT_ASSERT_SIZE(IScriptable, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/IScriptable-inl.hpp>
#endif
