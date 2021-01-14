#pragma once

#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct CClass;
struct IScriptable : ISerializable
{
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;
    virtual void sub_108() = 0;
    virtual void sub_110() = 0;

    void* GetValueHolder();

    CClass* GetType()
    {
        return classType ? classType : reinterpret_cast<CClass*>(GetNativeType());
    }

    CClass* classType;   // 30
    void* propertyBlock; // 38
};
RED4EXT_ASSERT_SIZE(IScriptable, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/IScriptable-inl.hpp>
#endif
