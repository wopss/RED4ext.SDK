#pragma once

#include <optional>

#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct CBaseFunction;
struct CClass;

struct IScriptable : ISerializable
{
    IScriptable();

    ~IScriptable() override;
    CClass* GetType() override;

    virtual void sub_D8(int64_t a1, int64_t a2); // D8
    virtual void sub_E0();                       // E0
    virtual void sub_E8();                       // E8
    virtual void sub_F0();                       // F0
    virtual void sub_F8();                       // F8
    virtual void sub_100();                      // 100

    operator const WeakHandle<IScriptable>&() const noexcept;
    operator Handle<IScriptable>() noexcept;

    void* GetValueHolder();
    void DestructValueHolder();

    CClass* nativeType; // 30
    void* valueHolder;  // 38
};
RED4EXT_ASSERT_SIZE(IScriptable, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/IScriptable-inl.hpp>
#endif
